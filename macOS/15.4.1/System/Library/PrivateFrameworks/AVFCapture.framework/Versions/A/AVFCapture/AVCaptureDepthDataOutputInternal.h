@class AVCaptureVideoDataOutput, AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

@interface AVCaptureDepthDataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    BOOL alwaysDiscardsLateDepthData;
    BOOL filteringEnabled;
    AVCaptureVideoDataOutput *companionSettingsVideoDataOutput;
}

- (void)dealloc;
- (id)init;

@end
