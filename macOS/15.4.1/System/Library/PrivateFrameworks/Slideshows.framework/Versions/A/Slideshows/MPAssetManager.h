@interface MPAssetManager : NSObject

+ (id)sharedManager;
+ (id)convertCGImageToBuffer:(struct CGImage { } *)a0;
+ (id)convertCGImageToBufferUsingDataProvider:(struct CGImage { } *)a0;
+ (id)convertCGImageToBufferUsingRGBDevice:(struct CGImage { } *)a0;
+ (void)releaseSharedManager;
+ (void)setInhibitSharedManagerInit:(BOOL)a0;

- (id)absolutePathFromPath:(id)a0;
- (double)altitudeForAssetAtPath:(id)a0;
- (void)cacheAttributes:(id)a0 forPath:(id)a1;
- (id)creationDateForAssetAtPath:(id)a0;
- (double)durationForAssetAtPath:(id)a0;
- (id)keywordsForAssetAtPath:(id)a0;
- (double)latitudeForAssetAtPath:(id)a0;
- (id)locationHierarchyForAssetAtPath:(id)a0;
- (double)longitudeForAssetAtPath:(id)a0;
- (unsigned long long)mediaTypeForAssetAtPath:(id)a0;
- (double)posterTimeForAssetAtPath:(id)a0;
- (id)regionsOfInterestForAsset:(struct CGImage { } *)a0;
- (id)regionsOfInterestForAssetAtPath:(id)a0;
- (struct CGSize { double x0; double x1; })resolutionForAssetAtPath:(id)a0;
- (double)startTimeForAssetAtPath:(id)a0;
- (double)stopTimeForAssetAtPath:(id)a0;

@end
