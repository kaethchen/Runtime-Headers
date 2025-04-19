@interface CSFBnnsIrLookUp : NSObject

+ (void)initialize;
+ (id)_generateHashBnnsIrPathForMilFile:(id)a0;
+ (id)getBnnsIrPathFromMilFile:(id)a0;
+ (id)readBnnsIrFromCacheMapWithMilFile:(id)a0;
+ (void)removeBnnsIrFromCacheMapWithMilFile:(id)a0;
+ (void)setCacheMapWithMilFile:(id)a0 bnnsIr:(id)a1;

@end
