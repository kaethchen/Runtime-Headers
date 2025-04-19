@interface KHFilterRenderer : NSObject

+ (id)ciContextForCGContext:(struct CGContext { } *)a0;
+ (struct CGImage { } *)createProSharpenImage:(struct CGImage { } *)a0 sharpness:(double)a1 edgeScale:(double)a2 falloff:(double)a3 context:(struct CGContext { } *)a4;
+ (id)proSharpenWithImage:(id)a0 sharpness:(double)a1 edgeScale:(double)a2 falloff:(double)a3;

@end
