@class NSString, NSTextField;

@interface _MKEnvironmentLabel : NSView {
    NSTextField *_label;
}

@property (copy, nonatomic) NSString *text;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;

@end
