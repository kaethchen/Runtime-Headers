@class NSImage, NSLayoutConstraint;

@interface SOPreviewingWaveformView : NSView

@property (retain, nonatomic) NSImage *unplayedWaveform;
@property (retain, nonatomic) NSImage *playedWaveform;
@property (retain, nonatomic) NSImage *waveform;
@property (retain, nonatomic) NSLayoutConstraint *waveformWidthLayoutConstraint;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearWaveform;

@end
