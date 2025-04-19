@class NSUUID, KTVerifierResult, NSData, NSDate;

@interface IDSQueryKeyTransparencyContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *ticket;
@property (readonly, nonatomic) KTVerifierResult *verifierResult;
@property (readonly, nonatomic) NSData *accountKey;
@property (readonly, nonatomic) NSDate *queryResponseTime;
@property (readonly, nonatomic) unsigned long long ktOptIn;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVerifierResult:(id)a0 ticket:(id)a1 accountKey:(id)a2 queryResponseTime:(id)a3 ktOptIn:(unsigned long long)a4;
- (BOOL)isEqualToQueryKeyTransparencyContext:(id)a0;

@end
