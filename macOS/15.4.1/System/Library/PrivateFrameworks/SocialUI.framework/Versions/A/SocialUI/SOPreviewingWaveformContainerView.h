@class SOPreviewingWaveformView, NSTextField;

@interface SOPreviewingWaveformContainerView : SOAbstractWaveFormView

@property (retain, nonatomic) SOPreviewingWaveformView *waveformView;
@property (retain, nonatomic) NSTextField *timeStamp;

- (void).cxx_destruct;
- (void)setTime:(double)a0;
- (void)setWaveformImage:(id)a0;
- (void)clearWaveform;

@end
