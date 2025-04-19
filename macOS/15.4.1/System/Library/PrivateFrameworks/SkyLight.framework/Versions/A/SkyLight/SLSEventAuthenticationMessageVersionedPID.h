@interface SLSEventAuthenticationMessageVersionedPID : NSObject <ECVersionedPID, ECAuthenticationMessageSignable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long token;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned int version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)token;
- (void)addToSigningContext:(id)a0;
- (id)initWithPID:(int)a0 version:(unsigned int)a1;

@end
