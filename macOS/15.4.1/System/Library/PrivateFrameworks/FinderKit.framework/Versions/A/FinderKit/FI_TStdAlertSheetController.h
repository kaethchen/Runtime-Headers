@class NSObject;
@protocol TStdAlertSheetClientProtocol, NSAlertDelegate;

@interface FI_TStdAlertSheetController : NSObject {
    NSObject<TStdAlertSheetClientProtocol> *_client;
    struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _notifySuppression;
}

@property (retain, nonatomic) FI_TStdAlertSheetController *selfReference;
@property (retain, nonatomic) NSObject<NSAlertDelegate> *strongAlertDelegate;

+ (void)stdAlertSheetWithClient:(id)a0 parentWindow:(id)a1 mainText:(id)a2 subText:(id)a3 okStr:(id)a4 cancelStr:(id)a5 otherStr:(id)a6 alertStyle:(unsigned long long)a7 defaultButton:(int)a8 customIcon:(id)a9 showSuppressionButton:(BOOL)a10 suppressionButtonTitle:(const void *)a11 notifySuppression:(struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a12 optionalHelpURL:(const void *)a13 actionIsDestructive:(BOOL)a14;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)alertDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;

@end
