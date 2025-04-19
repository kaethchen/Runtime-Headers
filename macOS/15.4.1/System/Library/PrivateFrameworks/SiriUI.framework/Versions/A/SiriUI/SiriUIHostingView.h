@class NSView;
@protocol VRXVisualResponse;

@interface SiriUIHostingView : SiriUICardSnippetView

@property (retain, nonatomic) NSView<VRXVisualResponse> *rootView;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)suppressVibrantBackground;

@end
