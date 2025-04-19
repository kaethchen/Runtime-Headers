@interface CWANQPProtoPortTuple : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long ipProtocol;
@property (nonatomic) long long portNumber;
@property (nonatomic) long long status;

+ (id)stringForProtoPortStatus:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIPProtocol:(long long)a0 portNumber:(long long)a1 status:(long long)a2;

@end
