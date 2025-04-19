@class NSOpenGLContext;

@interface IKOpenGLRoundedRectRendererCache : NSObject {
    unsigned int _glID;
    NSOpenGLContext *_context;
    float _strokeColor[4];
    float _fillColor[4];
    float _radius;
    float _scaleFactor;
    int _mode;
    int _lineWidth;
}

- (void)dealloc;
- (id)context;
- (unsigned int)glID;
- (id)initWithGLContext:(id)a0 glID:(unsigned int)a1 radius:(float)a2 scaleFactor:(float)a3 strokeColor:(float *)a4 fillColor:(float *)a5 mode:(int)a6 lineWidth:(int)a7;
- (BOOL)match:(float)a0 scaleFactor:(float)a1 strokeColor:(float *)a2 fillColor:(float *)a3 mode:(int)a4 lineWidth:(int)a5;

@end
