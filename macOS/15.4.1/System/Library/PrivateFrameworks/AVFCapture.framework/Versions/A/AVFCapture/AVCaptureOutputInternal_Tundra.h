@class NSMutableArray, AVCaptureSession_Tundra;

@interface AVCaptureOutputInternal_Tundra : NSObject {
    AVCaptureSession_Tundra *session;
    NSMutableArray *connections;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } metadataTransform;
    double rollAdjustment;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } internalLock;
    BOOL physicallyMirrorsVideo;
}

@end
