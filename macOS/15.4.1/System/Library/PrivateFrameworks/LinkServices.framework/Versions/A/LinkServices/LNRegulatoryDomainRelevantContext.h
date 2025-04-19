@class NSSet;

@interface LNRegulatoryDomainRelevantContext : LNRelevantContext

@property (readonly, nonatomic) NSSet *countryCodes;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCountryCodes:(id)a0;
- (id)analyticsDescription;

@end
