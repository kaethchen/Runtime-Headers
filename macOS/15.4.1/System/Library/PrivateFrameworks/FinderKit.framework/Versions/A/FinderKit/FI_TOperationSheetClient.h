@class NSString;

@interface FI_TOperationSheetClient : NSObject <TStdAlertSheetClientProtocol> {
    struct function<std::shared_ptr<TUndoableAction> ()> { struct __value_func<std::shared_ptr<TUndoableAction> ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _nextStep;
    struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _cancel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientWithNextStep:(const void *)a0 cancel:(const void *)a1;

@end
