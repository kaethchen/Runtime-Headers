@interface QLDrawingHelpers : NSObject

+ (id)imageNamed:(id)a0;
+ (id)_pathOfImageWithName:(id)a0 inBundle:(id)a1;
+ (id)imageNamed:(id)a0 fromBundle:(id)a1;
+ (BOOL)loadCGImageNamed:(id)a0 fromBundle:(id)a1 into:(struct CGImage **)a2;
+ (BOOL)loadNSImageNamed:(id)a0 fromBundle:(id)a1 into:(id *)a2;
+ (struct CGImage { } *)CGImageNamed:(id)a0;
+ (struct CGImage { } *)CGImageNamed:(id)a0 fromBundle:(id)a1;
+ (struct CGColor { } *)cgColorWithColor:(id)a0;
+ (struct CGColor { } *)cgColorWithRed:(double)a0 green:(double)a1 blue:(double)a2;
+ (struct CGColor { } *)cgColorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithCGColor:(struct CGColor { } *)a0 colorSpace:(struct CGColorSpace { } *)a1;

@end
