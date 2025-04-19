@class NSAlert, NSWindow, NSObject;
@protocol OS_os_log;

@interface BKUIAlertView : NSView {
    NSObject<OS_os_log> *bkui_alert_view_log;
}

@property (retain) NSAlert *alert;
@property (weak, nonatomic) NSWindow *parentWindow;

- (void).cxx_destruct;
- (void)hide;
- (id)initWithParrentWindow:(id)a0;
- (BOOL)isAlertHidden;
- (void)show:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2 otherButtonTitle:(id)a3 completionHandler:(id /* block */)a4;

@end
