@class AVWaveformTiledLayer, NSString, AVWaveform, AVObservationController, NSColor;

@interface AVWaveformLayer : CALayer <CALayerDelegate> {
    AVObservationController *_observationController;
    AVWaveformTiledLayer *_waveformLayer;
    BOOL _hasPendingRedraw;
    AVWaveform *_waveform;
    NSColor *_primaryColor;
    NSColor *_negativeSpaceColor;
    unsigned long long _waveformStyle;
    BOOL _smooth;
    double _sampleWidth;
    double _sampleGapWidth;
    double _sampleScale;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
    struct CGSize { double width; double height; } _contentSize;
}

@property (retain, nonatomic) AVWaveform *waveform;
@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (retain, nonatomic) NSColor *primaryColor;
@property (retain, nonatomic) NSColor *negativeSpaceColor;
@property (nonatomic) unsigned long long waveformStyle;
@property (nonatomic, getter=isSmooth) BOOL smooth;
@property (nonatomic) double sampleWidth;
@property (nonatomic) double sampleGapWidth;
@property (nonatomic) double sampleScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setNeedsDisplay;
- (BOOL)_shouldDraw;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_redrawWaveform;
- (BOOL)_canDraw;
- (void)_updateRedrawPolicy;
- (void)ensureClarity;

@end
