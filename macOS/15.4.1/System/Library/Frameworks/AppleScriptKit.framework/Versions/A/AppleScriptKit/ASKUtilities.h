@interface ASKUtilities : NSObject

+ (id)arrayFromPoint:(struct CGPoint { double x0; double x1; })a0;
+ (struct CGPoint { double x0; double x1; })pointFromArray:(id)a0;
+ (id)arrayFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)arrayFromSize:(struct CGSize { double x0; double x1; })a0;
+ (id)dataFromPoint:(struct CGPoint { double x0; double x1; })a0 forObject:(id)a1;
+ (id)dataFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forObject:(id)a1;
+ (id)dataFromSize:(struct CGSize { double x0; double x1; })a0;
+ (id)nameOfPath:(id)a0 includingExtension:(BOOL)a1;
+ (struct CGPoint { double x0; double x1; })pointFromData:(id)a0 forObject:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectFromArray:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectFromData:(id)a0 forObject:(id)a1;
+ (struct CGSize { double x0; double x1; })sizeFromArray:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeFromData:(id)a0;

@end
