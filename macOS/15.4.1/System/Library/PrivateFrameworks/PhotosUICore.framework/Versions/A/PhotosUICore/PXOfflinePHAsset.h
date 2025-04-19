@class PFVideoAdjustments, NSSet, NSString, NSData, PHAsset, PHPhotoLibrary;
@protocol PXDisplayAsset;

@interface PXOfflinePHAsset : PXFileBackedAsset <PXStoryDisplayAssetResource, PHPhotoLibraryAsset>

@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) id<PXDisplayAsset> px_storyResourceDisplayAsset;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } px_storyResourceFetchBestPlaybackRange;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } px_storyResourceFetchBestPlaybackRect;
@property (readonly, nonatomic) NSData *px_storyResourceFetchNormalizationData;
@property (readonly, nonatomic) PFVideoAdjustments *px_storyResourceFetchVideoAdjustments;
@property (readonly, nonatomic) NSSet *px_storyResourceFetchSceneClassifications;
@property (readonly, nonatomic) double px_storyResourceFetchCurationScore;
@property (readonly, nonatomic) long long px_storyResourceFetchFaceCount;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) long long px_storyResourceKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

+ (id)createOfflinePHAssetUsingOfflineAssets:(id)a0;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)uuid;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })acceptableCropRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredCropRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedCropForTargetSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedCropForTargetSize:(struct CGSize { double x0; double x1; })a0 withFocusRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedCropForTargetSize:(struct CGSize { double x0; double x1; })a0 withFocusRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andOutputCropScore:(double *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedCropForTargetSize:(struct CGSize { double x0; double x1; })a0 withOcclusionRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andOutputCropScore:(double *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestCropRectForAspectRatio:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceAreaRect;
- (id)initWithURL:(id)a0 matchingPHAsset:(id)a1;
- (id)initWithURL:(id)a0 matchingPHAssetUUID:(id)a1;
- (id)localizedGeoDescription;

@end
