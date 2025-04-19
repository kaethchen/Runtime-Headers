@class IKFilterChain, IKAdjustSlider, IKImageAdjust, NSButton;

@interface IKImageAdjustView : IKImageEditView {
    IKImageAdjust *_imageAdjust;
    IKFilterChain *_filterChain;
    IKAdjustSlider *_exposureSlider;
    IKAdjustSlider *_contrastSlider;
    IKAdjustSlider *_saturationSlider;
    IKAdjustSlider *_temperatureSlider;
    IKAdjustSlider *_tintSlider;
    IKAdjustSlider *_sepiaSlider;
    IKAdjustSlider *_sharpnessSlider;
    NSButton *_resetAll;
}

+ (id)sharedImageEditView;

- (void)setEnabled:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDataSource:(id)a0;
- (void)setup;
- (void)dataSourceDidChange;
- (void)resetAll:(id)a0;
- (void)updateCIFilter:(id)a0 slider:(id)a1 key:(id)a2 value:(id)a3 label:(id)a4;
- (void)viewWillBecomeActive;
- (void)viewWillBecomeInActive;

@end
