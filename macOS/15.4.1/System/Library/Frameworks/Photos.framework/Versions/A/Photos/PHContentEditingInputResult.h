@class PHImageResult, PHCompositeMediaResult, NSMutableDictionary, NSURL, NSNumber, PHAdjustmentData;

@interface PHContentEditingInputResult : PHCompositeMediaResult {
    PHAdjustmentData *_adjustmentData;
    PHImageResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    PHCompositeMediaResult *_adjustmentSecondaryDataResult;
    NSMutableDictionary *_flipImageURLs;
    NSMutableDictionary *_flipVideoURLs;
}

@property (nonatomic) BOOL canHandleAdjustmentData;
@property (retain, nonatomic) NSNumber *baseVersionNeeded;
@property (retain, nonatomic) NSURL *overCapturePhotoURL;
@property (retain, nonatomic) NSURL *overCaptureVideoURL;
@property (copy, nonatomic) NSURL *frontSwappingImageRenderURL;
@property (copy, nonatomic) NSURL *backSwappingImageRenderURL;
@property (copy, nonatomic) NSURL *frontSwappingVideoRenderURL;
@property (copy, nonatomic) NSURL *backSwappingVideoRenderURL;
@property (retain, nonatomic) PHAdjustmentData *originalAdjustmentData;

- (id)description;
- (void).cxx_destruct;
- (id)error;
- (void)setError:(id)a0;
- (id)imageData;
- (id)exifOrientation;
- (struct CGImage { } *)imageRef;
- (id)imageURL;
- (id)videoURL;
- (id)uniformTypeIdentifier;
- (void)addVideoResult:(id)a0;
- (void)addImageResult:(id)a0;
- (void)addAdjustmentDataResult:(id)a0;
- (void)addAdjustmentSecondaryDataResult:(id)a0;
- (void)addFlipImageURL:(id)a0 forAssetResourceType:(long long)a1;
- (void)addFlipVideoURL:(id)a0 forAssetResourceType:(long long)a1;
- (id)adjustmentData;
- (id)adjustmentSecondaryDataURL;
- (id)cancelledInfoKey;
- (void)clearAdjustmentData;
- (BOOL)containsValidData;
- (id)errorInfoKey;
- (id)flipImageURLs;
- (id)flipVideoURLs;
- (id)imagePropertiesLoadIfNeeded:(BOOL)a0;
- (id)imageSandboxExtensionToken;
- (id)inCloudInfoKey;
- (void)mergeInfoDictionaryFromResult:(id)a0;
- (id)videoAdjustmentData;
- (id)videoSandboxExtensionToken;

@end
