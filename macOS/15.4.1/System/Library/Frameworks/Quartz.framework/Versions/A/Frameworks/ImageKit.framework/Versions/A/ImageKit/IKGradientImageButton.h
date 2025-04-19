@interface IKGradientImageButton : NSButton

@property int highlightSides;
@property BOOL showsState;

+ (Class)cellClass;

- (int)gradientStyle;
- (void)setGradientStyle:(int)a0;
- (void)setBorderSides:(int)a0;
- (int)borderSides;

@end
