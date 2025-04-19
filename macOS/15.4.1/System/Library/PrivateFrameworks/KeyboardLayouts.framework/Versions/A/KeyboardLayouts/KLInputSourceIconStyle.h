@class NSColor, NSFontDescriptor;

@interface KLInputSourceIconStyle : NSObject

@property (retain, nonatomic) NSFontDescriptor *labelFontDescriptor;
@property (retain, nonatomic) NSColor *primaryLabelColor;
@property (retain, nonatomic) NSColor *secondaryLabelColor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property BOOL fillBackground;
@property (readonly, nonatomic) double fontSize;
@property (readonly, nonatomic) BOOL isSpaceRequired;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 fillBackground:(BOOL)a1;

@end
