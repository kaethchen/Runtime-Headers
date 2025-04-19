@class NSMutableArray;

@interface AVTouchBarVideoTrackView : AVTouchBarTrackView {
    NSMutableArray *_thumbnailsAndFilteredImages;
    BOOL _allPreviewLayersHaveContent;
}

+ (double)thumbnailGenerationToleranceForNumberOfThumbnails:(unsigned long long)a0 contentDuration:(double)a1;

- (void).cxx_destruct;
- (id)_filterImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)addThumbnails:(id)a0;
- (BOOL)allPreviewLayersHaveContent;
- (id)makePreviewLayer;
- (long long)numberOfPreviewLayersForWidth:(double)a0;
- (struct CGPoint { double x0; double x1; })positionForPreviewLayerWithIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })previewLayerSize;
- (void)removeAllThumbnails;
- (struct CGSize { double x0; double x1; })sizeForPreviewLayerWithIndex:(long long)a0;
- (id)thumbnailForTime:(double)a0;
- (double)thumbnailGenerationToleranceForCurrentSize;
- (void)updatePreviewLayerContent;
- (void)updatePreviewLayerContentForThumbnailsAndFilteredImages:(id)a0;

@end
