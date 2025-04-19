@interface QCOpenGLPort_Blending : QCIndexPort <QCOpenGLPort> {
    unsigned char _enabled;
    unsigned char _testingEnabled;
    int _sourceFunction;
    int _destFunction;
    int _alphaFunc;
    double _alphaRef;
    void *_unused4[1];
}

- (id)initWithNode:(id)a0 arguments:(id)a1;
- (void)setOnOpenGLContext:(id)a0;
- (void)unsetOnOpenGLContext:(id)a0;

@end
