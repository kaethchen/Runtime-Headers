@class PFMetadata, NSURL, NSData;

@interface PLMutableAssetAdjustmentOptions : PLAssetAdjustmentOptions

@property (nonatomic, getter=isSubstandardRender) BOOL substandardRender;
@property (nonatomic, getter=isDeferred) BOOL deferred;
@property (nonatomic) BOOL shouldUpdateAttributes;
@property (nonatomic) BOOL shouldGenerateThumbnails;
@property (nonatomic) BOOL shouldCheckForLegacyCameraAutoAdjustment;
@property (nonatomic) BOOL skipCheckCameraAutoAdjustment;
@property (nonatomic) BOOL skipCheckSleetCastAdjustment;
@property (nonatomic) long long fileIngestionType;
@property (nonatomic) struct CGSize { double x0; double x1; } fullSizeRenderSize;
@property (nonatomic) double fullSizeRenderDuration;
@property (retain, nonatomic) PFMetadata *mainFileMetadata;
@property (retain, nonatomic) NSURL *renderedContentURL;
@property (retain, nonatomic) NSData *penultimateRenderedJPEGData;
@property (retain, nonatomic) NSURL *penultimateRenderedVideoContentURL;
@property (retain, nonatomic) NSURL *renderedVideoComplementContentURL;
@property (retain, nonatomic) NSURL *penultimateRenderedVideoComplementContentURL;
@property (retain, nonatomic) NSURL *renderedVideoPosterContentURL;
@property (retain, nonatomic) NSURL *adjustmentSecondaryDataURL;

+ (id)assetAdjustmentOptionsForFileSystemImport;

- (void)setDeferred:(BOOL)a0;
- (void)setPenultimateRenderedJPEGData:(id)a0;
- (void)setAdjustmentSecondaryDataURL:(id)a0;
- (void)setFileIngestionType:(long long)a0;
- (void)setFullSizeRenderDuration:(double)a0;
- (void)setFullSizeRenderSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMainFileMetadata:(id)a0;
- (void)setPenultimateRenderedVideoComplementContentURL:(id)a0;
- (void)setPenultimateRenderedVideoContentURL:(id)a0;
- (void)setRenderedContentURL:(id)a0;
- (void)setRenderedVideoComplementContentURL:(id)a0;
- (void)setRenderedVideoPosterContentURL:(id)a0;
- (void)setShouldCheckForLegacyCameraAutoAdjustment:(BOOL)a0;
- (void)setShouldGenerateThumbnails:(BOOL)a0;
- (void)setShouldUpdateAttributes:(BOOL)a0;
- (void)setSubstandardRender:(BOOL)a0;
- (void)setSkipCheckCameraAutoAdjustment:(BOOL)a0;
- (void)setSkipCheckSleetCastAdjustment:(BOOL)a0;

@end
