@class NSString, NSColor;

@interface TUIKeyboardInputModeIconRendererConfiguration : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double baseFontSize;
@property (copy, nonatomic) NSString *fontFamily;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSColor *backgroundColor;
@property (nonatomic) double backgroundCornerRadius;
@property (copy, nonatomic) NSColor *tintColor;
@property (nonatomic) double detailLabelAlpha;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *artwork;

- (id)init;
- (void).cxx_destruct;

@end
