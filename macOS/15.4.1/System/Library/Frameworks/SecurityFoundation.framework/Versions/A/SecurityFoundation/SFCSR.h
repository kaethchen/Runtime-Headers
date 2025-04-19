@class NSData, NSString, NSMutableArray;

@interface SFCSR : NSObject {
    NSData *_csrData;
    char *_csrDer;
    unsigned int _csrDerLength;
    NSString *_commonName;
    NSString *_emailAddress;
    struct cssm_key { struct cssm_keyheader { unsigned int HeaderVersion; struct cssm_guid { unsigned int Data1; unsigned short Data2; unsigned short Data3; unsigned char Data4[8]; } CspId; unsigned int BlobType; unsigned int Format; unsigned int AlgorithmId; unsigned int KeyClass; unsigned int LogicalKeySizeInBits; unsigned int KeyAttr; unsigned int KeyUsage; struct cssm_date { unsigned char Year[4]; unsigned char Month[2]; unsigned char Day[2]; } StartDate; struct cssm_date { unsigned char Year[4]; unsigned char Month[2]; unsigned char Day[2]; } EndDate; unsigned int WrapAlgorithmId; unsigned int WrapMode; unsigned int Reserved; } KeyHeader; struct cssm_data { unsigned long long Length; char *Data; } KeyData; } _publicKey;
    NSMutableArray *_rfc822Names;
    NSMutableArray *_dnsNames;
    NSMutableArray *_uriNames;
    NSMutableArray *_ipAddrs;
    NSMutableArray *_crlDistrbutionPoints;
}

+ (id)_extensionName;
+ (BOOL)_isValidCSRFileExtension:(id)a0;

- (void)dealloc;
- (id)_userCommonName;
- (void *)parseCRLDistribPointsEntry:(const void *)a0 len:(unsigned long long)a1;
- (id)_crlDistrbutionPoints;
- (id)_csrData;
- (id)_dnsNames;
- (id)_ipAddrs;
- (struct cssm_key { struct cssm_keyheader { unsigned int x0; struct cssm_guid { unsigned int x0; unsigned short x1; unsigned short x2; unsigned char x3[8]; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; struct cssm_date { unsigned char x0[4]; unsigned char x1[2]; unsigned char x2[2]; } x9; struct cssm_date { unsigned char x0[4]; unsigned char x1[2]; unsigned char x2[2]; } x10; unsigned int x11; unsigned int x12; unsigned int x13; } x0; struct cssm_data { unsigned long long x0; char *x1; } x1; } *)_publicKey;
- (id)_rfc822Names;
- (void)_setCSRData:(id)a0;
- (id)_uriNames;
- (id)_userEmailAddress;
- (id)initWithCSR:(id)a0 clHandle:(long long)a1;
- (id)initWithFileName:(id)a0 clHandle:(long long)a1;
- (void)parseAttribute:(const void *)a0 len:(unsigned long long)a1;
- (void)parseDistributionPointNameEntry:(const void *)a0 len:(unsigned long long)a1;
- (void)parseSubjectAltNameEntry:(const void *)a0 len:(unsigned long long)a1;

@end
