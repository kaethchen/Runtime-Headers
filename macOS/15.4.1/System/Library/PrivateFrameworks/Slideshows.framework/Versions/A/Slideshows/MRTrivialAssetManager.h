@class NSString, NSMutableDictionary;

@interface MRTrivialAssetManager : NSObject <MZMediaManagement> {
    NSMutableDictionary *mCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (struct CGImage { } *)CGImageForAssetAtPath:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1 orientation:(char *)a2 thumbnailIfPossible:(BOOL)a3 now:(BOOL)a4;
- (struct __IOSurface { } *)IOSurfaceForAssetAtPath:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1 orientation:(char *)a2;
- (BOOL)isSupportedMovieForAssetAtPath:(id)a0;
- (id)attributeForAssetAtPath:(id)a0 forKey:(id)a1;
- (id)absolutePathForAssetAtPath:(id)a0;
- (id)absolutePathForAssetAtPath:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1;
- (id)absolutePathForStillAssetAtPath:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1;
- (id)infoForAssetAtPath:(id)a0;
- (struct CGSize { double x0; double x1; })resolutionForAssetAtPath:(id)a0;
- (double)startTimeForAssetAtPath:(id)a0;
- (double)stopTimeForAssetAtPath:(id)a0;
- (struct CGImage { } *)thumbnailCGImageForAssetAtPath:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1;

@end
