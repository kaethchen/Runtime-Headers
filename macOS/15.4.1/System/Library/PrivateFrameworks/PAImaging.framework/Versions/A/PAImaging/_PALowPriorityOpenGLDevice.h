@class PAOpenGLDevice;

@interface _PALowPriorityOpenGLDevice : PADevice {
    PAOpenGLDevice *_openGLDevice;
}

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithOpenGLDevice:(id)a0;

@end
