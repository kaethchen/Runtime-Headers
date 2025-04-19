@interface DGBrushCursor : NSObject

+ (id)crosshairCursor;
+ (id)cursorWithRadius:(float)a0 softness:(float)a1 showSoftness:(BOOL)a2 style:(int)a3;
+ (id)cursorWithRadius:(float)a0 softness:(float)a1 showSoftness:(BOOL)a2 style:(int)a3 scale:(float)a4;
+ (id)minusCursor;
+ (id)plusCursor;

@end
