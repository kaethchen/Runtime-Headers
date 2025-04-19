@class EKUICustomAlarmView, EKUIAlarmGadget, IGPopupWindowController, NSString;

@interface EKUICustomAlarmViewController : NSViewController <NSTextFieldDelegate>

@property (retain) IGPopupWindowController *popup;
@property (retain) EKUIAlarmGadget *gadget;
@property (retain) EKUICustomAlarmView *alarmView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)popupForAlarmGadget:(id)a0;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithGadget:(id)a0;
- (void)cancelClicked;
- (void)okClicked;

@end
