@interface KHPrintsProductFamilyItem : KHProductFamilyItem

@property (nonatomic) unsigned long long productFamily;

+ (id)allProductFamilyItems;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })horizontalDimensionRangeForPrintsProductFamily:(unsigned long long)a0;
+ (id)imageForPrintsProductFamily:(unsigned long long)a0 suffix:(id)a1;
+ (id)itemWithPrintsProductFamily:(unsigned long long)a0;
+ (id)keyForPrintsProductFamily:(unsigned long long)a0 suffix:(id)a1;
+ (id)subtitleForPrintsProductFamily:(unsigned long long)a0 countryCode:(id)a1;
+ (id)titleForPrintsProductFamily:(unsigned long long)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })verticalDimensionRangeForPrintsProductFamily:(unsigned long long)a0;

- (id)landscapeImage;
- (id)portraitImage;
- (id)productSubgroups;
- (id)subTitleForCountryCode:(id)a0;
- (id)universalImage;

@end
