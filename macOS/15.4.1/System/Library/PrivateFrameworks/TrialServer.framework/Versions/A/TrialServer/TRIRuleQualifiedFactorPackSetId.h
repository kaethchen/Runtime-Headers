@class NSString;
@protocol TRIFactorPackSetId;

@interface TRIRuleQualifiedFactorPackSetId : NSObject <NSCopying>

@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *ident;
@property (readonly, nonatomic) int targetingRuleIndex;

+ (id)factorPackSetIdWithIdent:(id)a0 targetingRuleIndex:(int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementIdent:(id)a0;
- (id)copyWithReplacementTargetingRuleIndex:(int)a0;
- (id)initWithIdent:(id)a0 targetingRuleIndex:(int)a1;
- (BOOL)isEqualToFactorPackSetId:(id)a0;

@end
