@interface SiriUI.SiriUITalkToSiriButtonView : NSView {
    void /* unknown type, empty encoding */ talkToSiriButtonView;
    void /* unknown type, empty encoding */ talkingToSiriButtonView;
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDisabled:(BOOL)a0;
- (void)setIsListening:(BOOL)a0;

@end
