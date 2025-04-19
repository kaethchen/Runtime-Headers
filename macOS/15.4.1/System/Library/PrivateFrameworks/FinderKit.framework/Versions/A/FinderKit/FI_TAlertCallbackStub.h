@class NSString;

@interface FI_TAlertCallbackStub : NSObject <TStdAlertSheetClientProtocol> {
    FI_TAlertCallbackStub *fSelf;
}

@property (nonatomic) struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } ok;
@property (nonatomic) struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } cancel;
@property (nonatomic) struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } other;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)hasOther;
- (BOOL)hasCancel;
- (void)stdAlertSheetOtherButtonPressed;
- (void)stdAlertSheetCancelButtonPressed;
- (void)stdAlertSheetOKButtonPressed;

@end
