@class NSMutableArray;

@interface IKOpenGLRoundedRectRenderer : NSObject {
    NSMutableArray *_roundedRectCaches;
    id _lastRoundedRectUsed;
}

@property double scaleFactor;

- (void)dealloc;
- (id)init;
- (unsigned int)_mapForRadius:(float)a0 scaleFactor:(float)a1 strokeColor:(float *)a2 fillColor:(float *)a3 mode:(int)a4 lineWidth:(int)a5;
- (unsigned int)_createMapForRadius:(float)a0 scaleFactor:(float)a1 strokeColor:(float *)a2 fillColor:(float *)a3 mode:(int)a4 lineWidth:(int)a5;
- (void)_drawRoundedBorder:(struct CGPoint { double x0; double x1; } *)a0 radius:(float)a1 mapRadius:(float)a2 groupType:(int)a3 texOut:(unsigned int)a4 texIn:(unsigned int)a5 lineWidth:(float)a6;
- (id)_findInCacheMapWithRadius:(float)a0 scaleFactor:(float)a1 strokeColor:(float *)a2 fillColor:(float *)a3 mode:(int)a4 lineWidth:(int)a5;
- (BOOL)renderBezelGroupWithPoints:(struct CGPoint { double x0; double x1; } *)a0 count:(int)a1 radius:(float)a2 strokeColor:(float *)a3 fillColor:(float *)a4 lineWidth:(int)a5;
- (BOOL)renderRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 radius:(float)a1 strokeColor:(float *)a2 fillColor:(float *)a3 mode:(int)a4 lineWidth:(int)a5;

@end
