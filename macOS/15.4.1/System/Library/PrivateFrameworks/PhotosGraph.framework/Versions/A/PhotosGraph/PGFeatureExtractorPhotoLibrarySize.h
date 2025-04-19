@interface PGFeatureExtractorPhotoLibrarySize : PGFeatureExtractor

+ (id)_allAssetsOfType:(long long)a0 withOptions:(id)a1;
+ (BOOL)preCalculatePhotoLibrarySizeWithPhotoLibrary:(id)a0;
+ (unsigned long long)preCalculatedPhotoLibrarySize;
+ (void)resetPreCalculatedPhotoLibrarySize;
+ (void)setPreCalculatedPhotoLibrarySize:(unsigned long long)a0;

- (id)name;
- (id)featureNames;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end
