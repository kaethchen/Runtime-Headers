@interface QCOpenGLPort_Color : QCColorPort <QCOpenGLPort> {
    void *_unused4[4];
}

- (id)initWithNode:(id)a0 arguments:(id)a1;
- (void)setOnOpenGLContext:(id)a0;
- (void)setPrimaryOnOpenGLContext:(id)a0;
- (void)unsetOnOpenGLContext:(id)a0;

@end
