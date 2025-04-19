@interface ImagePlaygroundInternal.CameraCaptureCoordinator : NSObject <AVCapturePhotoCaptureDelegate> {
    void /* unknown type, empty encoding */ _selectedImage;
    void /* unknown type, empty encoding */ _presentationMode;
}

- (id)init;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didFinishProcessingPhoto:(id)a1 error:(id)a2;

@end
