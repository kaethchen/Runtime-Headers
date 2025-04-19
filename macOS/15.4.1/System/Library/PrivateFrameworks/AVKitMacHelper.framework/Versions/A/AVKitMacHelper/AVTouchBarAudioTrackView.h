@class NSColor, AVWaveform;

@interface AVTouchBarAudioTrackView : AVTouchBarTrackView {
    AVWaveform *_waveform;
    NSColor *_waveformColor;
    NSColor *_backgroundColor;
}

@property (class, readonly) NSColor *defaultWaveformColor;

@property (retain, nonatomic) AVWaveform *waveform;
@property (retain, nonatomic) NSColor *waveformColor;

- (id)init;
- (void).cxx_destruct;
- (void)setMinTime:(double)a0;
- (void)setContentDurationWithinEndTimes:(double)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })_displayTimeRange;
- (id)_waveformLayer;
- (BOOL)allPreviewLayersHaveContent;
- (id)makePreviewLayer;
- (long long)numberOfPreviewLayersForWidth:(double)a0;
- (struct CGPoint { double x0; double x1; })positionForPreviewLayerWithIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })previewLayerSize;
- (struct CGSize { double x0; double x1; })sizeForPreviewLayerWithIndex:(long long)a0;
- (void)updatePreviewLayerContent;

@end
