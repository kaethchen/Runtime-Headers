@class NSSet;

@interface MKPointOfInterestFilter : NSObject <NSSecureCoding, NSCopying> {
    NSSet *_includedCategories;
    NSSet *_excludedCategories;
}

@property (class, readonly, nonatomic) MKPointOfInterestFilter *filterIncludingAllCategories;
@property (class, readonly, nonatomic) MKPointOfInterestFilter *filterExcludingAllCategories;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_isInclusive) BOOL isInclusive;
@property (readonly, nonatomic, getter=_isAllCategories) BOOL isAllCategories;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToPointOfInterestFilter:(id)a0;
- (BOOL)_excludesAllCategories;
- (id)_geoPOICategoryFilter;
- (BOOL)_includesAllCategories;
- (BOOL)excludesCategory:(id)a0;
- (BOOL)includesCategory:(id)a0;
- (id)initExcludingCategories:(id)a0;
- (id)initIncludingCategories:(id)a0;
- (id)initIncludingCategories:(id)a0 excludingCategories:(id)a1;

@end
