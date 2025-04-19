@class NSString;

@interface FI_TCancelButtonAlertSheetClient : NSObject <TStdAlertSheetClientProtocol> {
    struct function<void (long)> { struct __value_func<void (long)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _callback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientWithCallback:(struct function<void (long)> { struct __value_func<void (long)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;

@end
