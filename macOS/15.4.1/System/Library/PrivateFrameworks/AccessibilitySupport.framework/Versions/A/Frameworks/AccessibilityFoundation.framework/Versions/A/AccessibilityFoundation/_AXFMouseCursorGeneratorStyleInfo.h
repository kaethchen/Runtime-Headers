@class NSColor;

@interface _AXFMouseCursorGeneratorStyleInfo : NSObject

@property (retain, nonatomic) NSColor *fillColor;
@property (retain, nonatomic) NSColor *strokeColor;
@property (retain, nonatomic) NSColor *shadowColor;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowBlur;

+ (id)defaultStyle;
+ (id)userStyle;

- (void).cxx_destruct;

@end
