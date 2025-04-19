@class NSString;

@interface MTLToolsGLDrawable : MTLToolsObject <MTLGLDrawable>

@property (readonly) unsigned long long windowMode;
@property (readonly) int width;
@property (readonly) int height;
@property (readonly) int surfaceWidth;
@property (readonly) int surfaceHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)respondsToSelector:(SEL)a0;
- (int)clearDrawable;
- (id)lookupIOSurfaceAtIndex:(unsigned long long)a0;
- (int)setDrawableSurface:(unsigned int)a0 mode:(unsigned long long)a1 colorDepthMode:(unsigned int)a2 face:(unsigned int)a3 level:(unsigned int)a4 volatile:(unsigned int)a5 fixedSource:(unsigned int)a6 scaleOptions:(unsigned int)a7 scaledWidth:(unsigned int)a8 scaledHeight:(unsigned int)a9;
- (int)setSwapInterval:(int)a0 limit:(int)a1;
- (int)setSwapRectX:(unsigned int)a0 y:(unsigned int)a1 w:(unsigned int)a2 h:(unsigned int)a3;
- (int)signalSharedEvent:(id)a0 value:(unsigned long long)a1 operation:(unsigned long long)a2;

@end
