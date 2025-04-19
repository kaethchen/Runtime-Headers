@class NSImage;

@interface CDPRPDConfirmationFlow : NSObject

@property (retain, nonatomic) NSImage *iCloudIcon;

- (id)init;
- (void).cxx_destruct;
- (void)_confirmUserWantsToDeleteIn:(id)a0 withCompletion:(id /* block */)a1;
- (id)_createAlertWithMessage:(id)a0 informativeText:(id)a1 icon:(id)a2 buttonTitles:(id)a3;
- (void)presentRPDFlowIn:(id)a0 withCompletion:(id /* block */)a1;

@end
