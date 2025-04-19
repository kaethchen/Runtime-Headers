@class AssistantCalloutPopoverViewController, NSImageView, NSTextField;

@interface AssistantCalloutPopoverView : NSView {
    NSTextField *_title;
    NSImageView *_symbol;
}

@property (retain, nonatomic) AssistantCalloutPopoverViewController *controller;

- (id)init;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)mouseDown:(id)a0;
- (void)viewDidMoveToWindow;
- (void)setSymbol:(id)a0;

@end
