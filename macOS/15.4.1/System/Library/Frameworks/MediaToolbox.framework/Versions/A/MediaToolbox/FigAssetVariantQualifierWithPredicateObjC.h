@class NSPredicate;

@interface FigAssetVariantQualifierWithPredicateObjC : FigAssetVariantQualifierObjC <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSPredicate *_predicate;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPredicate:(id)a0;

@end
