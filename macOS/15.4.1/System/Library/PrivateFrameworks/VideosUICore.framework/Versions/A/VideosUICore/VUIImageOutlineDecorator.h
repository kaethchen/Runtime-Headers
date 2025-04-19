@class NSColor;

@interface VUIImageOutlineDecorator : VUIImageScaleDecorator

@property (readonly, copy, nonatomic) NSColor *outlineColor;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } outlineWidths;

+ (id)decoratorWithOutlineColor:(id)a0 outlineWidths:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)decoratorIdentifier;
- (id)initWithOutlineColor:(id)a0 outlineWidths:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
