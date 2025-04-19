@class NSString, NSImage;

@interface UXBackButton : NSSegmentedControl

@property (nonatomic) BOOL hidesTitle;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSImage *image;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;

@end
