@class CNContactPickerXPCRelay;
@protocol CNContactPickerInternalSetup, CNContactPickerViewController;

@interface CNContactPickerService : NSObject {
    CNContactPickerXPCRelay *_relay;
    id<CNContactPickerInternalSetup, CNContactPickerViewController> _viewController;
}

@property (readonly) CNContactPickerXPCRelay *XPCRelay;

+ (id)sharedService;

- (id)init;
- (void).cxx_destruct;
- (void)setViewController:(id)a0;

@end
