@class NSColor, LPSize;

@interface LPShadowStyle : NSObject

@property (nonatomic) double radius;
@property (nonatomic) double opacity;
@property (retain, nonatomic) NSColor *color;
@property (retain, nonatomic) LPSize *offset;

+ (id)cardHeadingIconShadow;
+ (id)collaborationPreviewShadow;
+ (id)wordmarkShadow;

- (id)init;
- (void).cxx_destruct;

@end
