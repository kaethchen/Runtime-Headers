@interface _TtCV18CreateMLComponents11VideoReader8Observer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ captureSession;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ task;
    void /* unknown type, empty encoding */ queue;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;

@end
