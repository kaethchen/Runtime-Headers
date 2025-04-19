@interface FI_TInlineProgressBarLayer : FI_TLayer

@property double percentComplete;
@property unsigned int state;
@property int flatProgressVariant;
@property BOOL selected;
@property (nonatomic) long long userInterfaceLayoutDirection;

+ (BOOL)needsDisplayForKey:(id)a0;

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithLayer:(id)a0;
- (id)initVariant:(int)a0;
- (void)setPercentCompleteAnimated:(double)a0;

@end
