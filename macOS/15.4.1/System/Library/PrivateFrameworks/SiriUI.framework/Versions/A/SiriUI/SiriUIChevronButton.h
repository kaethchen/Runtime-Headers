@class NSView, NSImageView, SiriUIKeyline;

@interface SiriUIChevronButton : NSButton {
    NSImageView *_chevronImageView;
    SiriUIKeyline *_keyline;
}

@property (retain, nonatomic) NSView *subview;
@property (nonatomic) double chevronRightInset;
@property (nonatomic) double leftSubviewInset;
@property (nonatomic) long long keylineType;
@property (nonatomic) BOOL hasChevron;

- (void).cxx_destruct;
- (void)layout;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
