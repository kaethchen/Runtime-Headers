@class NSImageView, NSTextField, NSTrackingArea, EKViewController, NSMutableArray;

@interface EKUITokenButton : NSView {
    NSTextField *_label;
    NSTextField *_caret;
    NSTextField *_sublabel;
    NSImageView *_icon;
    NSTrackingArea *_trackingArea;
    BOOL _selected;
    EKViewController *_viewController;
    NSMutableArray *_constraints;
}

@property (retain, nonatomic) id representedObject;
@property (copy, nonatomic) id /* block */ executeAction;
@property (copy, nonatomic) id /* block */ deleteAction;

- (void).cxx_destruct;
- (id)attributedTitle;
- (void)rightMouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (id)attributedSubtitle;
- (BOOL)becomeFirstResponder;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (BOOL)resignFirstResponder;
- (void)updateConstraints;
- (void)updateTrackingAreas;
- (id)initWithViewController:(id)a0;
- (void)updateContent;
- (id)caretString;
- (id)contentTextAttributes;
- (id)iconForRepresentedObject;
- (id)menuForRepresentedObject;
- (id)subtitleForRepresentedObject;
- (id)subtitleTextAttributes;
- (id)titleForRepresentedObject;

@end
