@interface FCGzipAssetTransformer : FCAssetTransformer

+ (id)sharedInstance;

- (BOOL)transformAssetDataFromFilePath:(id)a0 toFilePath:(id)a1 error:(id *)a2;

@end
