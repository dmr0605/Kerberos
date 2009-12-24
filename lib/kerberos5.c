#if HAVE_CONFIG_H
# include "config.h"
#endif

#include <libtasn1.h>

const ASN1_ARRAY_TYPE shishi_asn1_tab[] = {
  { "KerberosV5Spec2", 536872976, NULL },
  { NULL, 1610612748, NULL },
  { "iso", 1073741825, "1"},
  { "identified-organization", 1073741825, "3"},
  { "dod", 1073741825, "6"},
  { "internet", 1073741825, "1"},
  { "security", 1073741825, "5"},
  { "kerberosV5", 1073741825, "2"},
  { "modules", 1073741825, "4"},
  { "krb5spec2", 1, "2"},
  { "id-krb5", 1879048204, NULL },
  { "iso", 1073741825, "1"},
  { "identified-organization", 1073741825, "3"},
  { "dod", 1073741825, "6"},
  { "internet", 1073741825, "1"},
  { "security", 1073741825, "5"},
  { "kerberosV5", 1, "2"},
  { "Int32", 1073741827, NULL },
  { "UInt32", 1611137027, NULL },
  { "0", 10, "4294967295"},
  { "Microseconds", 1611137027, NULL },
  { "0", 10, "999999"},
  { "KerberosString", 1073741851, NULL },
  { "Realm", 1073741826, "KerberosString"},
  { "PrincipalName", 1610612741, NULL },
  { "name-type", 1610620930, "Int32"},
  { NULL, 2056, "0"},
  { "name-string", 536879115, NULL },
  { NULL, 1073743880, "1"},
  { NULL, 2, "KerberosString"},
  { "KerberosTime", 1082130449, NULL },
  { "HostAddress", 1610612741, NULL },
  { "addr-type", 1610620930, "Int32"},
  { NULL, 2056, "0"},
  { "address", 536879111, NULL },
  { NULL, 2056, "1"},
  { "HostAddresses", 1610612747, NULL },
  { NULL, 2, "HostAddress"},
  { "AuthorizationData", 1610612747, NULL },
  { NULL, 536870917, NULL },
  { "ad-type", 1610620930, "Int32"},
  { NULL, 2056, "0"},
  { "ad-data", 536879111, NULL },
  { NULL, 2056, "1"},
  { "PA-DATA", 1610612741, NULL },
  { "padata-type", 1610620930, "Int32"},
  { NULL, 2056, "1"},
  { "padata-value", 536879111, NULL },
  { NULL, 2056, "2"},
  { "KerberosFlags", 1075838982, NULL },
  { "EncryptedData", 1610612741, NULL },
  { "etype", 1610620930, "Int32"},
  { NULL, 2056, "0"},
  { "kvno", 1610637314, "UInt32"},
  { NULL, 2056, "1"},
  { "cipher", 536879111, NULL },
  { NULL, 2056, "2"},
  { "EncryptionKey", 1610612741, NULL },
  { "keytype", 1610620930, "Int32"},
  { NULL, 2056, "0"},
  { "keyvalue", 536879111, NULL },
  { NULL, 2056, "1"},
  { "Checksum", 1610612741, NULL },
  { "cksumtype", 1610620930, "Int32"},
  { NULL, 2056, "0"},
  { "checksum", 536879111, NULL },
  { NULL, 2056, "1"},
  { "Ticket", 1610620933, NULL },
  { NULL, 1073744904, "1"},
  { "tkt-vno", 1610620931, NULL },
  { NULL, 2056, "0"},
  { "realm", 1610620930, "Realm"},
  { NULL, 2056, "1"},
  { "sname", 1610620930, "PrincipalName"},
  { NULL, 2056, "2"},
  { "enc-part", 536879106, "EncryptedData"},
  { NULL, 2056, "3"},
  { "EncTicketPart", 1610620933, NULL },
  { NULL, 1073744904, "3"},
  { "flags", 1610620930, "TicketFlags"},
  { NULL, 2056, "0"},
  { "key", 1610620930, "EncryptionKey"},
  { NULL, 2056, "1"},
  { "crealm", 1610620930, "Realm"},
  { NULL, 2056, "2"},
  { "cname", 1610620930, "PrincipalName"},
  { NULL, 2056, "3"},
  { "transited", 1610620930, "TransitedEncoding"},
  { NULL, 2056, "4"},
  { "authtime", 1610620930, "KerberosTime"},
  { NULL, 2056, "5"},
  { "starttime", 1610637314, "KerberosTime"},
  { NULL, 2056, "6"},
  { "endtime", 1610620930, "KerberosTime"},
  { NULL, 2056, "7"},
  { "renew-till", 1610637314, "KerberosTime"},
  { NULL, 2056, "8"},
  { "caddr", 1610637314, "HostAddresses"},
  { NULL, 2056, "9"},
  { "authorization-data", 536895490, "AuthorizationData"},
  { NULL, 2056, "10"},
  { "TransitedEncoding", 1610612741, NULL },
  { "tr-type", 1610620930, "Int32"},
  { NULL, 2056, "0"},
  { "contents", 536879111, NULL },
  { NULL, 2056, "1"},
  { "TicketFlags", 1073741826, "KerberosFlags"},
  { "AS-REQ", 1610620930, "KDC-REQ"},
  { NULL, 3080, "10"},
  { "TGS-REQ", 1610620930, "KDC-REQ"},
  { NULL, 3080, "12"},
  { "KDC-REQ", 1610612741, NULL },
  { "pvno", 1610620931, NULL },
  { NULL, 2056, "1"},
  { "msg-type", 1610620931, NULL },
  { NULL, 2056, "2"},
  { "padata", 1610637323, NULL },
  { NULL, 1073743880, "3"},
  { NULL, 2, "PA-DATA"},
  { "req-body", 536879106, "KDC-REQ-BODY"},
  { NULL, 2056, "4"},
  { "KDC-REQ-BODY", 1610612741, NULL },
  { "kdc-options", 1610620930, "KDCOptions"},
  { NULL, 2056, "0"},
  { "cname", 1610637314, "PrincipalName"},
  { NULL, 2056, "1"},
  { "realm", 1610620930, "Realm"},
  { NULL, 2056, "2"},
  { "sname", 1610637314, "PrincipalName"},
  { NULL, 2056, "3"},
  { "from", 1610637314, "KerberosTime"},
  { NULL, 2056, "4"},
  { "till", 1610620930, "KerberosTime"},
  { NULL, 2056, "5"},
  { "rtime", 1610637314, "KerberosTime"},
  { NULL, 2056, "6"},
  { "nonce", 1610620930, "UInt32"},
  { NULL, 2056, "7"},
  { "etype", 1610620939, NULL },
  { NULL, 1073743880, "8"},
  { NULL, 2, "Int32"},
  { "addresses", 1610637314, "HostAddresses"},
  { NULL, 2056, "9"},
  { "enc-authorization-data", 1610637314, "EncryptedData"},
  { NULL, 2056, "10"},
  { "additional-tickets", 536895499, NULL },
  { NULL, 1073743880, "11"},
  { NULL, 2, "Ticket"},
  { "KDCOptions", 1073741826, "KerberosFlags"},
  { "AS-REP", 1610620930, "KDC-REP"},
  { NULL, 3080, "11"},
  { "TGS-REP", 1610620930, "KDC-REP"},
  { NULL, 3080, "13"},
  { "KDC-REP", 1610612741, NULL },
  { "pvno", 1610620931, NULL },
  { NULL, 2056, "0"},
  { "msg-type", 1610620931, NULL },
  { NULL, 2056, "1"},
  { "padata", 1610637323, NULL },
  { NULL, 1073743880, "2"},
  { NULL, 2, "PA-DATA"},
  { "crealm", 1610620930, "Realm"},
  { NULL, 2056, "3"},
  { "cname", 1610620930, "PrincipalName"},
  { NULL, 2056, "4"},
  { "ticket", 1610620930, "Ticket"},
  { NULL, 2056, "5"},
  { "enc-part", 536879106, "EncryptedData"},
  { NULL, 2056, "6"},
  { "EncASRepPart", 1610620930, "EncKDCRepPart"},
  { NULL, 3080, "25"},
  { "EncTGSRepPart", 1610620930, "EncKDCRepPart"},
  { NULL, 3080, "26"},
  { "EncKDCRepPart", 1610612741, NULL },
  { "key", 1610620930, "EncryptionKey"},
  { NULL, 2056, "0"},
  { "last-req", 1610620930, "LastReq"},
  { NULL, 2056, "1"},
  { "nonce", 1610620930, "UInt32"},
  { NULL, 2056, "2"},
  { "key-expiration", 1610637314, "KerberosTime"},
  { NULL, 2056, "3"},
  { "flags", 1610620930, "TicketFlags"},
  { NULL, 2056, "4"},
  { "authtime", 1610620930, "KerberosTime"},
  { NULL, 2056, "5"},
  { "starttime", 1610637314, "KerberosTime"},
  { NULL, 2056, "6"},
  { "endtime", 1610620930, "KerberosTime"},
  { NULL, 2056, "7"},
  { "renew-till", 1610637314, "KerberosTime"},
  { NULL, 2056, "8"},
  { "srealm", 1610620930, "Realm"},
  { NULL, 2056, "9"},
  { "sname", 1610620930, "PrincipalName"},
  { NULL, 2056, "10"},
  { "caddr", 536895490, "HostAddresses"},
  { NULL, 2056, "11"},
  { "LastReq", 1610612747, NULL },
  { NULL, 536870917, NULL },
  { "lr-type", 1610620930, "Int32"},
  { NULL, 2056, "0"},
  { "lr-value", 536879106, "KerberosTime"},
  { NULL, 2056, "1"},
  { "AP-REQ", 1610620933, NULL },
  { NULL, 1073744904, "14"},
  { "pvno", 1610620931, NULL },
  { NULL, 2056, "0"},
  { "msg-type", 1610620931, NULL },
  { NULL, 2056, "1"},
  { "ap-options", 1610620930, "APOptions"},
  { NULL, 2056, "2"},
  { "ticket", 1610620930, "Ticket"},
  { NULL, 2056, "3"},
  { "authenticator", 536879106, "EncryptedData"},
  { NULL, 2056, "4"},
  { "APOptions", 1073741826, "KerberosFlags"},
  { "Authenticator", 1610620933, NULL },
  { NULL, 1073744904, "2"},
  { "authenticator-vno", 1610620931, NULL },
  { NULL, 2056, "0"},
  { "crealm", 1610620930, "Realm"},
  { NULL, 2056, "1"},
  { "cname", 1610620930, "PrincipalName"},
  { NULL, 2056, "2"},
  { "cksum", 1610637314, "Checksum"},
  { NULL, 2056, "3"},
  { "cusec", 1610620930, "Microseconds"},
  { NULL, 2056, "4"},
  { "ctime", 1610620930, "KerberosTime"},
  { NULL, 2056, "5"},
  { "subkey", 1610637314, "EncryptionKey"},
  { NULL, 2056, "6"},
  { "seq-number", 1610637314, "UInt32"},
  { NULL, 2056, "7"},
  { "authorization-data", 536895490, "AuthorizationData"},
  { NULL, 2056, "8"},
  { "AP-REP", 1610620933, NULL },
  { NULL, 1073744904, "15"},
  { "pvno", 1610620931, NULL },
  { NULL, 2056, "0"},
  { "msg-type", 1610620931, NULL },
  { NULL, 2056, "1"},
  { "enc-part", 536879106, "EncryptedData"},
  { NULL, 2056, "2"},
  { "EncAPRepPart", 1610620933, NULL },
  { NULL, 1073744904, "27"},
  { "ctime", 1610620930, "KerberosTime"},
  { NULL, 2056, "0"},
  { "cusec", 1610620930, "Microseconds"},
  { NULL, 2056, "1"},
  { "subkey", 1610637314, "EncryptionKey"},
  { NULL, 2056, "2"},
  { "seq-number", 536895490, "UInt32"},
  { NULL, 2056, "3"},
  { "KRB-SAFE", 1610620933, NULL },
  { NULL, 1073744904, "20"},
  { "pvno", 1610620931, NULL },
  { NULL, 2056, "0"},
  { "msg-type", 1610620931, NULL },
  { NULL, 2056, "1"},
  { "safe-body", 1610620930, "KRB-SAFE-BODY"},
  { NULL, 2056, "2"},
  { "cksum", 536879106, "Checksum"},
  { NULL, 2056, "3"},
  { "KRB-SAFE-BODY", 1610612741, NULL },
  { "user-data", 1610620935, NULL },
  { NULL, 2056, "0"},
  { "timestamp", 1610637314, "KerberosTime"},
  { NULL, 2056, "1"},
  { "usec", 1610637314, "Microseconds"},
  { NULL, 2056, "2"},
  { "seq-number", 1610637314, "UInt32"},
  { NULL, 2056, "3"},
  { "s-address", 1610620930, "HostAddress"},
  { NULL, 2056, "4"},
  { "r-address", 536895490, "HostAddress"},
  { NULL, 2056, "5"},
  { "KRB-PRIV", 1610620933, NULL },
  { NULL, 1073744904, "21"},
  { "pvno", 1610620931, NULL },
  { NULL, 2056, "0"},
  { "msg-type", 1610620931, NULL },
  { NULL, 2056, "1"},
  { "enc-part", 536879106, "EncryptedData"},
  { NULL, 2056, "3"},
  { "EncKrbPrivPart", 1610620933, NULL },
  { NULL, 1073744904, "28"},
  { "user-data", 1610620935, NULL },
  { NULL, 2056, "0"},
  { "timestamp", 1610637314, "KerberosTime"},
  { NULL, 2056, "1"},
  { "usec", 1610637314, "Microseconds"},
  { NULL, 2056, "2"},
  { "seq-number", 1610637314, "UInt32"},
  { NULL, 2056, "3"},
  { "s-address", 1610620930, "HostAddress"},
  { NULL, 2056, "4"},
  { "r-address", 536895490, "HostAddress"},
  { NULL, 2056, "5"},
  { "KRB-CRED", 1610620933, NULL },
  { NULL, 1073744904, "22"},
  { "pvno", 1610620931, NULL },
  { NULL, 2056, "0"},
  { "msg-type", 1610620931, NULL },
  { NULL, 2056, "1"},
  { "tickets", 1610620939, NULL },
  { NULL, 1073743880, "2"},
  { NULL, 2, "Ticket"},
  { "enc-part", 536879106, "EncryptedData"},
  { NULL, 2056, "3"},
  { "EncKrbCredPart", 1610620933, NULL },
  { NULL, 1073744904, "29"},
  { "ticket-info", 1610620939, NULL },
  { NULL, 1073743880, "0"},
  { NULL, 2, "KrbCredInfo"},
  { "nonce", 1610637314, "UInt32"},
  { NULL, 2056, "1"},
  { "timestamp", 1610637314, "KerberosTime"},
  { NULL, 2056, "2"},
  { "usec", 1610637314, "Microseconds"},
  { NULL, 2056, "3"},
  { "s-address", 1610637314, "HostAddress"},
  { NULL, 2056, "4"},
  { "r-address", 536895490, "HostAddress"},
  { NULL, 2056, "5"},
  { "KrbCredInfo", 1610612741, NULL },
  { "key", 1610620930, "EncryptionKey"},
  { NULL, 2056, "0"},
  { "prealm", 1610637314, "Realm"},
  { NULL, 2056, "1"},
  { "pname", 1610637314, "PrincipalName"},
  { NULL, 2056, "2"},
  { "flags", 1610637314, "TicketFlags"},
  { NULL, 2056, "3"},
  { "authtime", 1610637314, "KerberosTime"},
  { NULL, 2056, "4"},
  { "starttime", 1610637314, "KerberosTime"},
  { NULL, 2056, "5"},
  { "endtime", 1610637314, "KerberosTime"},
  { NULL, 2056, "6"},
  { "renew-till", 1610637314, "KerberosTime"},
  { NULL, 2056, "7"},
  { "srealm", 1610637314, "Realm"},
  { NULL, 2056, "8"},
  { "sname", 1610637314, "PrincipalName"},
  { NULL, 2056, "9"},
  { "caddr", 536895490, "HostAddresses"},
  { NULL, 2056, "10"},
  { "KRB-ERROR", 1610620933, NULL },
  { NULL, 1073744904, "30"},
  { "pvno", 1610620931, NULL },
  { NULL, 2056, "0"},
  { "msg-type", 1610620931, NULL },
  { NULL, 2056, "1"},
  { "ctime", 1610637314, "KerberosTime"},
  { NULL, 2056, "2"},
  { "cusec", 1610637314, "Microseconds"},
  { NULL, 2056, "3"},
  { "stime", 1610620930, "KerberosTime"},
  { NULL, 2056, "4"},
  { "susec", 1610620930, "Microseconds"},
  { NULL, 2056, "5"},
  { "error-code", 1610620930, "Int32"},
  { NULL, 2056, "6"},
  { "crealm", 1610637314, "Realm"},
  { NULL, 2056, "7"},
  { "cname", 1610637314, "PrincipalName"},
  { NULL, 2056, "8"},
  { "realm", 1610620930, "Realm"},
  { NULL, 2056, "9"},
  { "sname", 1610620930, "PrincipalName"},
  { NULL, 2056, "10"},
  { "e-text", 1610637314, "KerberosString"},
  { NULL, 2056, "11"},
  { "e-data", 536895495, NULL },
  { NULL, 2056, "12"},
  { "METHOD-DATA", 1610612747, NULL },
  { NULL, 2, "PA-DATA"},
  { "TYPED-DATA", 1612709899, NULL },
  { "MAX", 1074266122, "1"},
  { NULL, 536870917, NULL },
  { "data-type", 1610620930, "Int32"},
  { NULL, 2056, "0"},
  { "data-value", 536895495, NULL },
  { NULL, 2056, "1"},
  { "PA-ENC-TIMESTAMP", 1073741826, "EncryptedData"},
  { "PA-ENC-TS-ENC", 1610612741, NULL },
  { "patimestamp", 1610620930, "KerberosTime"},
  { NULL, 2056, "0"},
  { "pausec", 536895490, "Microseconds"},
  { NULL, 2056, "1"},
  { "ETYPE-INFO-ENTRY", 1610612741, NULL },
  { "etype", 1610620930, "Int32"},
  { NULL, 2056, "0"},
  { "salt", 536895495, NULL },
  { NULL, 2056, "1"},
  { "ETYPE-INFO", 1610612747, NULL },
  { NULL, 2, "ETYPE-INFO-ENTRY"},
  { "ETYPE-INFO2-ENTRY", 1610612741, NULL },
  { "etype", 1610620930, "Int32"},
  { NULL, 2056, "0"},
  { "salt", 1610637314, "KerberosString"},
  { NULL, 2056, "1"},
  { "s2kparams", 536895495, NULL },
  { NULL, 2056, "2"},
  { "ETYPE-INFO2", 1612709899, NULL },
  { "MAX", 1074266122, "1"},
  { NULL, 2, "ETYPE-INFO2-ENTRY"},
  { "AD-IF-RELEVANT", 1073741826, "AuthorizationData"},
  { "AD-KDCIssued", 1610612741, NULL },
  { "ad-checksum", 1610620930, "Checksum"},
  { NULL, 2056, "0"},
  { "i-realm", 1610637314, "Realm"},
  { NULL, 2056, "1"},
  { "i-sname", 1610637314, "PrincipalName"},
  { NULL, 2056, "2"},
  { "elements", 536879106, "AuthorizationData"},
  { NULL, 2056, "3"},
  { "AD-AND-OR", 1610612741, NULL },
  { "condition-count", 1610620930, "Int32"},
  { NULL, 2056, "0"},
  { "elements", 536879106, "AuthorizationData"},
  { NULL, 2056, "1"},
  { "AD-MANDATORY-FOR-KDC", 2, "AuthorizationData"},
  { NULL, 0, NULL }
};
