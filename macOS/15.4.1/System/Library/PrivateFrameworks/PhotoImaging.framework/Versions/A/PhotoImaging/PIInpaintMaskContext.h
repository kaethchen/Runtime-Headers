@class NUDigest, PIInpaintMask, NSArray, NSString, CIContext;
@protocol NUVisionInstanceSegmentationResult;

@interface PIInpaintMaskContext : NSObject

@property (retain) PIInpaintMask *subjectMask;
@property (retain) NUDigest *subjectMaskDigest;
@property (readonly, nonatomic) CIContext *ciContext;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } livePhotoKeyFrameTime;
@property (readonly, nonatomic) id<NUVisionInstanceSegmentationResult> segmentationResult;
@property (readonly, nonatomic) NSArray *detectedFaces;
@property (readonly, nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } fullImageExtent;
@property (readonly, nonatomic) NSString *assetIdentifier;
@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) double initialSensitivityScore;

+ (id)_createSubjectMaskFromBuffer:(id)a0 digest:(id)a1 ciContext:(id)a2 fullImageSize:(struct { long long x0; long long x1; })a3;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)_foregroundOperationsFromComposition:(id)a0 subjectMaskBuffer:(id)a1;
- (void)_resetForComposition:(id)a0 requestID:(id)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (void)_updatePropertiesFromContext:(id)a0;
- (id)initWithSegmentationResult:(id)a0 composition:(id)a1 subjectMaskBuffer:(id)a2 detectedFaces:(id)a3 fullImageExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a4 assetIdentifier:(id)a5 requestID:(id)a6 initialSensitivityScore:(double)a7 livePhotoKeyFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a8;
- (id)subjectMaskDigestForComposition:(id)a0 subjectMaskBuffer:(id)a1;
- (void)updateSubjectMaskBufferIfNeededForComposition:(id)a0 digest:(id)a1 completionQueue:(id)a2 completion:(id /* block */)a3;

@end
