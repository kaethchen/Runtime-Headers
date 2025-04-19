@class NSData;

@interface AWDLServiceDiscoveryConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *serviceKey;
@property (readonly, nonatomic) NSData *serviceValue;
@property (readonly, nonatomic) BOOL isResolve;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKey:(id)a0;
- (id)initWithKey:(id)a0 value:(id)a1 resolve:(BOOL)a2;

@end
