@class NSString;

@interface HKFeatureIdentifierAndContext : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly, copy, nonatomic) NSString *context;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFeatureIdentifier:(id)a0 context:(id)a1;

@end
