@class NSOrderedSet, NSString, NSImage;

@interface KHProductFamilyItem : NSObject

@property (nonatomic) unsigned long long productFamily;
@property (readonly, nonatomic) NSOrderedSet *productSubgroups;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (readonly, nonatomic) unsigned long long maxSubgroupCount;
@property (readonly, nonatomic) NSImage *portraitImage;
@property (readonly, nonatomic) NSImage *landscapeImage;
@property (readonly, nonatomic) NSImage *universalImage;

+ (id)allProductFamilyItems;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })horizontalDimensionRangeForProductFamily:(unsigned long long)a0;
+ (id)imageForProductFamily:(unsigned long long)a0 suffix:(id)a1;
+ (Class)itemClassForProjectType:(long long)a0;
+ (id)keyForProductFamily:(unsigned long long)a0 suffix:(id)a1;
+ (id)subtitleForProductFamily:(unsigned long long)a0 countryCode:(id)a1;
+ (id)titleForProductFamily:(unsigned long long)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })verticalDimensionRangeForProductFamily:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)subTitleForCountryCode:(id)a0;

@end
