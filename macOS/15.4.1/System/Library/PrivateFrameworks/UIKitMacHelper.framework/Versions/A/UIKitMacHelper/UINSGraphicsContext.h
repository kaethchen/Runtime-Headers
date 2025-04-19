@interface UINSGraphicsContext : NSBitmapGraphicsContext

@property (readonly) int type;
@property (readonly) void *auxInfo;

- (void)dealloc;
- (id)initWithCGContext:(struct CGContext { } *)a0 type:(int)a1 auxInfo:(void *)a2;

@end
