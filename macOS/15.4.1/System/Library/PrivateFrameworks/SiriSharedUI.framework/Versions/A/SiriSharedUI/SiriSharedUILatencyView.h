@class SiriSharedUIContentLabel, NSImageView, SiriSharedUILatencyViewModel;
@protocol SiriSharedUILatencyViewDelegate;

@interface SiriSharedUILatencyView : SiriSharedUIStandardView

@property (retain, nonatomic) SiriSharedUIContentLabel *utteranceView;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) NSImageView *closeIcon;
@property (weak, nonatomic) id<SiriSharedUILatencyViewDelegate> delegate;
@property (retain, nonatomic) SiriSharedUILatencyViewModel *viewModel;

- (void).cxx_destruct;
- (void)layout;
- (void)_update;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_clear;
- (id)_utteranceLabel;
- (void)_closeButtonTapped:(id)a0;
- (id)_createLabelForUtterance:(id)a0;
- (id)_fontForUtteranceLabel;
- (id)_getTextFromUtteranceView;
- (void)_setTextForLabel:(id)a0 text:(id)a1;
- (void)_setUtterance:(id)a0;
- (void)_setViewModel:(id)a0;
- (id)initWithContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
