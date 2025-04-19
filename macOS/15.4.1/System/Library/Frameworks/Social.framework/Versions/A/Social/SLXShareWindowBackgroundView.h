@class NSTextView, NSTextField;

@interface SLXShareWindowBackgroundView : NSView {
    NSTextView *_messageTextView;
    NSTextField *_charactersCountTextField;
}

@property int textureStyle;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawSeparationLineAtHeight:(double)a0;

@end
