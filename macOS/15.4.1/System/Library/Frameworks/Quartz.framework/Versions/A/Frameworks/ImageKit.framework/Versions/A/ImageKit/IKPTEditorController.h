@class IKPictureTakerView, NSLayoutConstraint, NSView, NSTabView, NSSlider, NSButton, IKPTContentViewController;

@interface IKPTEditorController : IKViewController <IKRecentPicturesButtonDelegate> {
    NSLayoutConstraint *buttonSizeConstraint;
}

@property IKPTContentViewController *ikpt_contentViewController;
@property NSButton *doneButton;
@property NSButton *cancelButton;
@property NSButton *chooseButton;
@property NSView *editorView;
@property IKPictureTakerView *cropView;
@property NSTabView *editorTabView;
@property NSSlider *zoomSlider;
@property NSButton *minSizeButton;
@property NSButton *maxSizeButton;
@property NSView *countdownView;
@property NSButton *cameraButton;
@property NSButton *effectsButton;

+ (struct CGSize { double x0; double x1; })cropSize;

- (void)loadView;
- (BOOL)isLiveCapturing;
- (double)controlViewHeight;
- (id)pictureTakerForRecentPicturesButton:(id)a0;
- (void)setLiveCapturing:(BOOL)a0;
- (void)updateContentLayout;

@end
