@class NSString;

@interface VIReducePersonOverTriggerRegionalAnnotation : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) int faceCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 faceCount:(int)a3;

@end
