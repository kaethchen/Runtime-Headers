@class NSString, NSTextView, AXVCaptionTextView, NSWindow;
@protocol AXVCaptionWindowActionDelegate;

@interface AXVCaptionWindow : AXVVoiceOverStyleWindow

@property (retain, nonatomic, setter=_setCaptionTextView:) AXVCaptionTextView *_captionTextView;
@property (nonatomic, setter=_setNumberOfCaptionTextLinesToShow:) long long _numberOfCaptionTextLinesToShow;
@property (retain, nonatomic, setter=_setCaptionTextHistoryWindow:) NSWindow *_captionTextHistoryWindow;
@property (retain, nonatomic, setter=_setCaptionTextHistoryTextView:) NSTextView *_captionTextHistoryTextView;
@property (copy, nonatomic) NSString *captionText;
@property (nonatomic) double captionFontSize;
@property (weak, nonatomic) id<AXVCaptionWindowActionDelegate> actionDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)_getResizeEdgeAndCornerThicknesses:(double[8])a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (struct CGSize { double x0; double x1; })windowWillResize:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (void)_updateFrameSize;
- (void)_setupStackView;
- (void)_handleCloseButtonPress;
- (double)_heightAfterAdjustingToSnapToLines:(double)a0;
- (double)_heightToShowNumberOfLines:(long long)a0;
- (double)_lineHeightForTextView:(id)a0;
- (long long)_numberOfCaptionTextLinesToShowForHeight:(double)a0;
- (void)_pressCloseCaptionTextHistoryWindow;
- (void)_pressedHistoryButton;
- (id)_setupButtonStackViewWithTextBaseline:(double)a0;
- (void)_setupCaptionTextHistoryTextViewForWindow:(id)a0;
- (void)_setupCaptionTextHistoryWindow;
- (id)_setupCloseButton;
- (id)_setupHistoryButton;

@end
