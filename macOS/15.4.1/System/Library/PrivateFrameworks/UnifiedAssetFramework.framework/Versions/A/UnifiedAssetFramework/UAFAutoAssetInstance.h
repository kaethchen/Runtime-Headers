@interface UAFAutoAssetInstance : NSObject

+ (BOOL)clear:(id)a0 path:(id)a1;
+ (BOOL)decomposeSaveFileURL:(id)a0 assetSetName:(id *)a1 atomicInstance:(id *)a2;
+ (id)instanceDirURL;
+ (id)saveFileURL:(id)a0;

@end
