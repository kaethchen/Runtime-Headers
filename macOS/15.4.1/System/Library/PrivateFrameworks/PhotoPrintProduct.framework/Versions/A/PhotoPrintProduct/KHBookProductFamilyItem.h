@interface KHBookProductFamilyItem : KHProductFamilyItem

@property (nonatomic) unsigned long long productFamily;

+ (id)allProductFamilyItems;
+ (id)itemWithBookProductFamily:(unsigned long long)a0;
+ (id)keyForProductFamily:(unsigned long long)a0 suffix:(id)a1;

@end
