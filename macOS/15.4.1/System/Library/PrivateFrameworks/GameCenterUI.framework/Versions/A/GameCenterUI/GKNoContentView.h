@class NSString, GKUIActivityIndicatorView, NSStackView, GKUIContentUnavailableView;

@interface GKNoContentView : NSView

@property (retain, nonatomic) GKUIContentUnavailableView *contentUnavailableView;
@property (retain, nonatomic) GKUIActivityIndicatorView *loadingIndicatorView;
@property (retain, nonatomic) NSStackView *stackView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (nonatomic, getter=isLoading) BOOL loading;

- (void).cxx_destruct;
- (id)message;
- (void)setMessage:(id)a0;
- (void)setTitle:(id)a0;
- (id)title;
- (void)setButtonTitle:(id)a0;
- (id)buttonTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
