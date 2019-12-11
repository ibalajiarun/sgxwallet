/*
    Copyright (C) 2019-Present SKALE Labs

    This file is part of sgxwallet.

    sgxwallet is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published
    by the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    sgxwallet is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with sgxwallet.  If not, see <https://www.gnu.org/licenses/>.

    @file DH_dkg.h
    @author Stan Kladko
    @date 2019
*/

#ifndef SGXD_DRIVE_KEY_DKG_H
#define SGXD_DRIVE_KEY_DKG_H

//void gen_session_keys(mpz_t skey, char* pub_key);
void gen_session_key(char* skey, char* pub_keyB, char* common_key);

void session_key_recover(const char *skey_str, const char* sshare, char* common_key);

void xor_encrypt(char* key, char* message, char* cypher);

void xor_decrypt(char* key, char* cypher, char* message);


#endif //SGXD_DRIVE_KEY_DKG_H
