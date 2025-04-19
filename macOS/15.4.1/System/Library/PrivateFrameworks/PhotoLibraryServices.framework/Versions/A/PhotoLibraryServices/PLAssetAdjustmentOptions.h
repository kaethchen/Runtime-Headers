@class PFMetadata, NSURL, NSData;

@interface PLAssetAdjustmentOptions : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic, getter=isSubstandardRender) BOOL substandardRender;
@property (readonly, nonatomic, getter=isDeferred) BOOL deferred;
@property (readonly, nonatomic) BOOL shouldUpdateAttributes;
@property (readonly, nonatomic) BOOL shouldGenerateThumbnails;
@property (readonly, nonatomic) BOOL shouldCheckForLegacyCameraAutoAdjustment;
@property (readonly, nonatomic) BOOL skipCheckCameraAutoAdjustment;
@property (readonly, nonatomic) BOOL skipCheckSleetCastAdjustment;
@property (readonly, nonatomic) long long fileIngestionType;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fullSizeRenderSize;
@property (readonly, nonatomic) double fullSizeRenderDuration;
@property (readonly, nonatomic) PFMetadata *mainFileMetadata;
@property (readonly, nonatomic) NSURL *renderedContentURL;
@property (readonly, nonatomic) NSData *penultimateRenderedJPEGData;
@property (readonly, nonatomic) NSURL *penultimateRenderedVideoContentURL;
@property (readonly, nonatomic) NSURL *renderedVideoComplementContentURL;
@property (readonly, nonatomic) NSURL *penultimateRenderedVideoComplementContentURL;
@property (readonly, nonatomic) NSURL *renderedVideoPosterContentURL;
@property (readonly, nonatomic) NSURL *adjustmentSecondaryDataURL;

+ (id)assetAdjustmentOptionsForPortraitImportWithMainFileMetadata:(id)a0;
+ (id)assetAdjustmentOptionsForRevertingToOriginal;
+ (id)assetAdjustmentOptionsForSLMAdjustmentsWithMainFileMetadata:(id)a0;
+ (id)assetAdjustmentOptionsForApplyingResourcesFromCPL;
+ (id)assetAdjustmentOptionsForImageWriterWithEditedRenderURL:(id)a0 async:(BOOL)a1 fullSizeRenderSize:(struct CGSize { double x0; double x1; })a2 mainFileMetadata:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_setPropertiesOnCopy:(id)a0;
- (BOOL)shouldOverwriteFullSizeRenderSize;

@end
