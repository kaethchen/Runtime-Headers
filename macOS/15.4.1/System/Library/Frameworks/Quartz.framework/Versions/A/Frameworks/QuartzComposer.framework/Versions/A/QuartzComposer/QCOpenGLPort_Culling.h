@interface QCOpenGLPort_Culling : QCIndexPort <QCOpenGLPort> {
    unsigned char _enabled;
    int _mode;
    void *_unused4[4];
}

- (id)initWithNode:(id)a0 arguments:(id)a1;
- (void)setOnOpenGLContext:(id)a0;
- (void)unsetOnOpenGLContext:(id)a0;

@end
