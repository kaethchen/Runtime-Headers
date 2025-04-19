@interface NEIKEv2KEMProtocol : NSObject <NSCopying> {
    unsigned long long _method;
}

@property (readonly) unsigned long long method;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithMethod:(unsigned long long)a0;

@end
