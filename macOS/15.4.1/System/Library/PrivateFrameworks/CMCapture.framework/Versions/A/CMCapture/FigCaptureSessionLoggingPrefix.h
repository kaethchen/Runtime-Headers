@class NSString;

@interface FigCaptureSessionLoggingPrefix : NSObject {
    struct { unsigned int val[8]; } _clientAuditToken;
    int _clientPID;
    int _clientPIDUsedForLoggingPrefix;
    struct OpaqueFigCaptureSession { } *_captureSession;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _stringValueLock;
    NSString *_stringValue;
}

- (void)dealloc;
- (id)description;
- (void)_updateLoggingPrefix;

@end
