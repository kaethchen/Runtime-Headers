@interface NEIKEv2EncryptionProtocol : NSObject <NSCopying> {
    BOOL _is256Bit;
    unsigned long long _wireType;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithEncryptionType:(unsigned long long)a0;

@end
