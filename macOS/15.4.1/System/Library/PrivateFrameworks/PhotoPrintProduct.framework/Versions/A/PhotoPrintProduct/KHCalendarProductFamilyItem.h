@interface KHCalendarProductFamilyItem : KHProductFamilyItem {
    unsigned long long _productFamily;
}

+ (id)allProductFamilyItems;
+ (id)itemWithCalendarProductFamily:(unsigned long long)a0;
+ (id)keyForProductFamily:(unsigned long long)a0 suffix:(id)a1;

- (unsigned long long)productFamily;
- (void)setProductFamily:(unsigned long long)a0;

@end
