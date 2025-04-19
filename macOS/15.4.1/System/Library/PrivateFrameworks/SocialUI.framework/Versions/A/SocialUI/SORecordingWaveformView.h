@class SOAudioMessageWaveForm;

@interface SORecordingWaveformView : NSView

@property (readonly, nonatomic) SOAudioMessageWaveForm *waveForm;

- (void)dealloc;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didChangeScreenParameters:(id)a0;
- (void)appendPowerLevel:(double)a0;
- (void)clearPowerLevels;

@end
