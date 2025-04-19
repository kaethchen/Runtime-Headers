@interface _TtCV5Human12CameraSource13CameraManager : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {
    void /* unknown type, empty encoding */ cameraSession;
    void /* unknown type, empty encoding */ camera;
    void /* unknown type, empty encoding */ cameraInput;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ continuation;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ dispatchQueue;
    void /* unknown type, empty encoding */ dataOutput;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;

@end
