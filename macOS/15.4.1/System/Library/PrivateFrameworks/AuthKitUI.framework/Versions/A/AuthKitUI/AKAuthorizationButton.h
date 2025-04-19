@class NSString;

@interface AKAuthorizationButton : NSButton

@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } alignmentRectInsetsOverride;

- (void)addTarget:(id)a0 action:(SEL)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)setupButton;

@end
