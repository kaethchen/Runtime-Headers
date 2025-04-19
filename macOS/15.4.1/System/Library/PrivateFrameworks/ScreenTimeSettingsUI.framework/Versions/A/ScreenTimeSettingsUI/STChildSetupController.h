@class STContentAndPrivacyController, NSViewController;

@interface STChildSetupController : NSObject

@property (retain, nonatomic) STContentAndPrivacyController *contentAndPrivacyController;
@property (copy) id /* block */ completionHandler;
@property (copy) id /* block */ completionHandlerWithIntroductionModel;
@property (readonly, nonatomic) NSViewController *initialViewController;

+ (BOOL)isCommunicationSafetyAlreadyEnabledForUser:(id)a0;

- (void).cxx_destruct;
- (id)initWithDSID:(id)a0;
- (id)initWithDSID:(id)a0 updateExistingSettings:(BOOL)a1 childAge:(id)a2 childName:(id)a3;
- (void)_saveIntroductionViewModel:(id)a0 forDSID:(id)a1 updateExistingSettings:(BOOL)a2;
- (id)initOnChildDeviceWithDSID:(id)a0 childAge:(id)a1;
- (id)initOnChildDeviceWithDSID:(id)a0 childAge:(id)a1 childName:(id)a2;
- (id)initWithDSID:(id)a0 isChildDevice:(BOOL)a1;
- (id)initWithDSID:(id)a0 isChildDevice:(BOOL)a1 childAge:(id)a2 childName:(id)a3 updateExistingSettings:(BOOL)a4;
- (id)initWithDSID:(id)a0 isChildDevice:(BOOL)a1 updateExistingSettings:(BOOL)a2;
- (id)initWithDSID:(id)a0 updateExistingSettings:(BOOL)a1;

@end
