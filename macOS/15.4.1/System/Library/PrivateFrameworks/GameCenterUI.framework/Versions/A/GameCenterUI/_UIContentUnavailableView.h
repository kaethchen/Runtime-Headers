@class NSTextField, NSArray, NSView, NSString, NSButton;

@interface _UIContentUnavailableView : NSView

@property (retain) NSView *container;
@property (retain) NSTextField *titleView;
@property (retain) NSTextField *messageView;
@property (retain) NSView *buttonsView;
@property (retain) NSButton *button;
@property (retain) NSButton *extraButton;
@property (retain) NSArray *buttonsViewConstraints;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (copy, nonatomic) NSString *extraButtonTitle;
@property (copy, nonatomic) id /* block */ extraButtonAction;

- (void).cxx_destruct;
- (id)message;
- (void)setMessage:(id)a0;
- (void)setTitle:(id)a0;
- (id)title;
- (void)buttonPressed:(id)a0;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 style:(unsigned long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 style:(unsigned long long)a2 includeBackdrop:(BOOL)a3;
- (void)extraButtonPressed:(id)a0;
- (id)initCommonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 style:(unsigned long long)a2 includeBackdrop:(BOOL)a3;

@end
