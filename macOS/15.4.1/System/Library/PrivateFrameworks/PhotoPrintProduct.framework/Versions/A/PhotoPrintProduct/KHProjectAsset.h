@interface KHProjectAsset : KHAsset

+ (id)assetForKey:(long long)a0 fromDB:(id)a1 toDB:(id)a2 isProjectAsset:(BOOL)a3;
+ (id)assetForKey:(long long)a0 fromDatabase:(id)a1;
+ (id)assetForPath:(id)a0 inDatabase:(id)a1 createIfMissing:(BOOL)a2 fromDatabase:(id)a3 relocate:(BOOL)a4;

- (BOOL)isProjectModel;

@end
