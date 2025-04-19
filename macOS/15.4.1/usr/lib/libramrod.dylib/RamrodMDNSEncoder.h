@class NSMutableData, NSMutableDictionary;

@interface RamrodMDNSEncoder : NSObject {
    NSMutableData *_packet;
    NSMutableDictionary *_names;
    unsigned long long _rdlengthLocation;
    unsigned long long _rdataLocation;
    unsigned int _ttl;
}

@property (readonly) unsigned long long recordCount;

- (id)init;
- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (const void *)bytes;
- (void).cxx_destruct;
- (void)encodeBytes:(const void *)a0 length:(unsigned char)a1;
- (id)initWithTTL:(unsigned int)a0;
- (void)_updateHeader;
- (void)encodeA:(id)a0 address:(const struct in_addr { unsigned int x0; } *)a1;
- (void)encodeAAAA:(id)a0 address:(const struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } *)a1;
- (BOOL)encodeAnyFamily:(id)a0 address:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1;
- (void)encodeCNAME:(id)a0 target:(id)a1;
- (void)encodeLabel:(id)a0;
- (void)encodeName:(id)a0;
- (void)encodeName:(id)a0 compression:(BOOL)a1;
- (void)encodePTR:(id)a0 target:(id)a1;
- (void)encodeRR:(id)a0 type:(unsigned short)a1 class:(unsigned short)a2;
- (void)encodeRR:(id)a0 type:(unsigned short)a1 class:(unsigned short)a2 unique:(BOOL)a3;
- (void)encodeSRV:(id)a0 priority:(unsigned short)a1 weight:(unsigned short)a2 port:(unsigned short)a3 target:(id)a4;
- (void)encodeTXT:(id)a0 strings:(id)a1;
- (void)updateRRDataLength;

@end
