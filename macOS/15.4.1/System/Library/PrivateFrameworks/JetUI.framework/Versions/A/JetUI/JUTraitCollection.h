@class NSDictionary, NSString;

@interface JUTraitCollection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *traitStorage;
@property (readonly, nonatomic) long long layoutDirection;
@property (readonly, nonatomic) double displayScale;
@property (readonly, copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly, nonatomic) long long horizontalSizeClass;
@property (readonly, nonatomic) long long verticalSizeClass;

+ (id)traitCollectionWithDisplayScale:(double)a0;
+ (id)traitCollectionWithHorizontalSizeClass:(long long)a0;
+ (id)traitCollectionWithLayoutDirection:(long long)a0;
+ (id)traitCollectionWithPreferredContentSizeCategory:(id)a0;
+ (id)traitCollectionWithTraitsFromCollections:(id)a0;
+ (id)traitCollectionWithVerticalSizeClass:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)containsTraitsInCollection:(id)a0;
- (id)_initWithTraitStorage:(id)a0;
- (id)_traitForName:(id)a0 withClass:(Class)a1;

@end
