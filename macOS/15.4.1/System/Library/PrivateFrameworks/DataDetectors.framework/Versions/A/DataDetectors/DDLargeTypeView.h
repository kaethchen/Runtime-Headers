@class NSString, NSMutableDictionary;

@interface DDLargeTypeView : NSView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _windowRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _textRect;
    NSString *_string;
    NSMutableDictionary *_attributes;
}

- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)makeBackingLayer;
- (void)mouseDown:(id)a0;
- (void)viewDidChangeBackingProperties;
- (id)initWithString:(id)a0 onScreen:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })windowRect;

@end
