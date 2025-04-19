@interface NEIKEv2PRFProtocol : NSObject <NSCopying> {
    unsigned long long _type;
}

@property (readonly) unsigned long long type;
@property (readonly) unsigned int nonceSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0;

@end
