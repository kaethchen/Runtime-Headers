@class CNPublishingSubject;

@interface ABClickableTextView : NSTextView

@property (readonly, nonatomic) CNPublishingSubject *mouseDownObservable;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)mouseDown:(id)a0;
- (void)common_init;

@end
