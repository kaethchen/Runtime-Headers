@class NSData, NSObject;
@protocol GEOPListStateCapturing, OS_dispatch_queue;

@interface geo_state_capture_handle : NSObject {
    id<GEOPListStateCapturing> _weakStateCapturing;
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_description;
    unsigned long long _stateCaptureHandle;
    unsigned int _frequency;
    double _lastCaptureTime;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)_capturePlistState:(const struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;

@end
