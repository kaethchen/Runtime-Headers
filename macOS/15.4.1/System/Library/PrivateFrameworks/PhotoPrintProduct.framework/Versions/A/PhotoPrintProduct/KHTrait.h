@class NSString;

@interface KHTrait : KHModel {
    long long _categoryId;
    NSString *_name;
}

+ (id)traitForKey:(long long)a0 fromDatabase:(id)a1;

- (void)dealloc;
- (id)name;
- (void)setName:(id)a0;
- (long long)categoryId;
- (void)setCategoryId:(long long)a0;
- (void)cacheCategoryId:(long long)a0;
- (void)cacheName:(id)a0;

@end
