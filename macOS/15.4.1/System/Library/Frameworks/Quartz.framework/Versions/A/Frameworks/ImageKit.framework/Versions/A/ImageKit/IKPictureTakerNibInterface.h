@class NSBox, NSView, NSSlider, NSTabView, NSButton;

@interface IKPictureTakerNibInterface : NSObject <IKPictureTakerInterface> {
    NSView *_layerSuperview;
    id _imageView;
    id _countdownView;
    NSButton *_chooseButton;
    NSButton *_setButton;
    NSButton *_cancelButton;
    NSSlider *_slider;
    NSButton *_smallerButton;
    NSButton *_largerButton;
    NSButton *_cameraButton;
    NSButton *_fxButton;
    NSTabView *_countdownTabView;
    NSView *_pictureTakerViewBox;
    NSBox *_verticalSeparator;
    id _delegate;
}

- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)awakeFromNib;
- (id)cancelButton;
- (id)imageView;
- (id)slider;
- (id)cameraButton;
- (id)chooseButton;
- (id)countdownTabView;
- (id)countdownView;
- (id)fxButton;
- (id)largerButton;
- (id)layerSuperview;
- (id)pictureTaker;
- (id)pictureTakerForRecentPicturesButton:(id)a0;
- (id)pictureTakerViewBox;
- (id)setButton;
- (void)setFxButtonsAreaInPanel:(id)a0 collapsed:(BOOL)a1;
- (void)setMode:(long long)a0 options:(id)a1;
- (id)smallerButton;

@end
