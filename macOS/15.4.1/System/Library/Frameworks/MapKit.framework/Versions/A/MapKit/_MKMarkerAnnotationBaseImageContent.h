@class NSColor;

@interface _MKMarkerAnnotationBaseImageContent : NSObject

@property (readonly, nonatomic) NSColor *fillColor;
@property (readonly, nonatomic) NSColor *strokeColor;
@property (readonly, nonatomic) double strokeWidth;
@property (readonly, nonatomic) int blendMode;
@property (readonly, nonatomic) long long baseImageType;

- (void).cxx_destruct;
- (id)initWithFillColor:(id)a0 strokeColor:(id)a1 strokeWidth:(double)a2 blendMode:(int)a3 baseImageType:(long long)a4;

@end
