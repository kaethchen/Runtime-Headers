@class NSArray;

@interface Feedback.DropRejectingTextView : NSTextView

@property (nonatomic, retain) void /* unknown type, empty encoding */ placeholderAttributedString;
@property (nonatomic, readonly) NSArray *acceptableDragTypes;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;

@end
