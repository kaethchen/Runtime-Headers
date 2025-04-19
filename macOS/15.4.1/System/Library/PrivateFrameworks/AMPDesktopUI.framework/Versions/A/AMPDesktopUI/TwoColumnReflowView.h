@class NSView;

@interface TwoColumnReflowView : NSView

@property (weak, nonatomic) NSView *_realLeadingHeader;
@property (weak, nonatomic) NSView *_realTrailingHeader;
@property (weak, nonatomic) NSView *_realLeadingBody;
@property (weak, nonatomic) NSView *_realTrailingBody;
@property (weak, nonatomic) NSView *_realFooter;
@property (retain, nonatomic) NSView *leadingHeader;
@property (retain, nonatomic) NSView *trailingHeader;
@property (retain, nonatomic) NSView *leadingBody;
@property (retain, nonatomic) NSView *trailingBody;
@property (retain, nonatomic) NSView *footer;
@property (nonatomic) double breakpointWidth;

+ (id)keyPathsForValuesInvalidatingConstraints;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)declaredLayoutRules;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)propertyKeysForViewSpy;

@end
