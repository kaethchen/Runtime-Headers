@class AVPlayerControllerTimeResolver, NSMutableDictionary, AVTimer, AVAssetImageGenerator, AVPlayerLayer, AVPlayerController, AVVideoTrackThumbnailManager;

@interface AVVideoTrackView : AVTrackView {
    AVPlayerController *_playerController;
    struct { double fromZoomFactor; double currentZoomFactor; double toZoomFactor; double fromOffset; double currentOffset; double toOffset; double centerTime; } _zoomInfo;
    AVAssetImageGenerator *_imageGenerator;
    AVVideoTrackThumbnailManager *_thumbnailManager;
    NSMutableDictionary *_thumbnailLayers;
    struct CGSize { double width; double height; } _lastThumbnailGenerationSize;
    AVPlayerLayer *_trimThumbnailPlayerLayer;
    AVPlayerControllerTimeResolver *_timeResolver;
    BOOL _didStartThumbnailGeneration;
    AVTimer *_startThumbnailGenerationAndLayoutTimer;
}

@property (weak) AVPlayerController *playerController;
@property (retain) AVPlayerLayer *trimThumbnailPlayerLayer;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidEndLiveResize;
- (BOOL)wantsUpdateLayer;
- (struct CGSize { double x0; double x1; })_mediaCompositionNaturalSizeForPlayerController:(id)a0;
- (void)_startThumbnailGenerationAndLayout;
- (unsigned long long)_thumbnailIndexForTime:(double)a0 zoomFactor:(unsigned long long)a1 offset:(double)a2 thumbnailSize:(struct CGSize { double x0; double x1; })a3 containerSize:(struct CGSize { double x0; double x1; })a4;
- (struct CGPoint { double x0; double x1; })_thumbnailPlayerPositionForTime:(double)a0 zoomInfo:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })a1 previewLayerSize:(struct CGSize { double x0; double x1; })a2 thumbnailSize:(struct CGSize { double x0; double x1; })a3;
- (struct CGPoint { double x0; double x1; })_thumbnailPositionForThumbnail:(id)a0 zoomInfo:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })a1 thumbnailSize:(struct CGSize { double x0; double x1; })a2 containerSize:(struct CGSize { double x0; double x1; })a3;
- (struct CGPoint { double x0; double x1; })_thumbnailPositionForTime:(double)a0 zoomFactor:(double)a1 offset:(double)a2 containerSize:(struct CGSize { double x0; double x1; })a3;
- (struct CGSize { double x0; double x1; })_thumbnailSizeForContainerSize:(struct CGSize { double x0; double x1; })a0 andPlayerController:(id)a1;
- (struct CGSize { double x0; double x1; })_thumbnailSizeForThumbnail:(id)a0 zoomInfo:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })a1 thumbnailSize:(struct CGSize { double x0; double x1; })a2 containerSize:(struct CGSize { double x0; double x1; })a3;
- (id)_thumbnailTimesForOffset:(double)a0 andZoomFactor:(double)a1 thumbnailSize:(struct CGSize { double x0; double x1; })a2 containerSize:(struct CGSize { double x0; double x1; })a3;
- (id)_thumbnailsToLayoutForZoomInfo:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })a0 thumbnailSize:(struct CGSize { double x0; double x1; })a1 containerSize:(struct CGSize { double x0; double x1; })a2;
- (void)_updateThumbnailPlayerLayerPositionForPreviewLayerSize:(struct CGSize { double x0; double x1; })a0 thumbnailSize:(struct CGSize { double x0; double x1; })a1;
- (double)allowedScrollAmount;
- (void)startThumbnailGenerationWithZoomInfo:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })a0;
- (void)zoomWithInfo:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })a0;

@end
