@class SiriSharedUIDeviceMotionEffectView, NSView, NSMapTable, NSMutableArray;
@protocol SiriSharedUICompactServerUtteranceViewDelegate;

@interface SiriSharedUICompactServerUtteranceView : SiriSharedUIStandardView {
    NSMutableArray *_serverLabels;
    NSMapTable *_emojiLabels;
    BOOL _isMultiLine;
}

@property (readonly, nonatomic) SiriSharedUIDeviceMotionEffectView *deviceMotionEffectView;
@property (readonly, nonatomic) NSView *labelsContainerView;
@property (weak, nonatomic) id<SiriSharedUICompactServerUtteranceViewDelegate> delegate;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL isInAmbient;
@property (nonatomic) BOOL isInAmbientInteractivity;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setUtterances:(id)a0;
- (BOOL)isMultiLine;
- (id)_createLabel;
- (id)initWithContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0 delegate:(id)a1;
- (id)_createEmojiLabelForString:(id)a0 containingEmojisAtRanges:(id)a1;
- (id)_createLabelForUtterance:(id)a0;
- (id)_fontForUtteranceLabel;
- (double)_lineHeightForFont:(id)a0;
- (double)_scaledSpacingBetweenLabels;
- (void)_setTextForLabel:(id)a0 text:(id)a1;
- (id)_textForLabel:(id)a0;

@end
