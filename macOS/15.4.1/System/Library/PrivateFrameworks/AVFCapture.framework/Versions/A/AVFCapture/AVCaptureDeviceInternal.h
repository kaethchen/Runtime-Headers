@class NSMutableArray, AVCaptureDeviceInput;

@interface AVCaptureDeviceInternal : NSObject {
    int openRefCount;
    int configLockRefCount;
    int configLockPid;
    BOOL usingDevice;
    AVCaptureDeviceInput *activeInput;
    NSMutableArray *activeReactions;
}

- (void)dealloc;
- (id)init;

@end
