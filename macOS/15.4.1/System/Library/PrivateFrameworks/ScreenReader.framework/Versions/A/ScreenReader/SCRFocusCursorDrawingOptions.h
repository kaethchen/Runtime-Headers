@class NSColor, SCRElement;

@interface SCRFocusCursorDrawingOptions : NSObject <NSCopying>

@property (retain, nonatomic) NSColor *color;
@property (nonatomic) double cornerRadius;
@property (weak, nonatomic) SCRElement *primaryElement;
@property (weak, nonatomic) SCRElement *secondaryElement;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } primaryRect;

+ (id)options;
+ (id)optionsWithColor:(id)a0 radius:(double)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
