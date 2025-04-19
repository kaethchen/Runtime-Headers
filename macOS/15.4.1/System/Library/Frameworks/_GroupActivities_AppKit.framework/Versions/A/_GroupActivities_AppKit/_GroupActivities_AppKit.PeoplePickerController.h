@interface _GroupActivities_AppKit.PeoplePickerController : NSObject <_EXHostViewControllerDelegate> {
    void /* unknown type, empty encoding */ conversationManager;
    void /* unknown type, empty encoding */ conversationManagerClient;
    void /* unknown type, empty encoding */ shareSheetSessionID;
    void /* unknown type, empty encoding */ startStagedActivity;
    void /* unknown type, empty encoding */ $__lazy_storage_$_connection;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hostViewControllerConfig;
    void /* unknown type, empty encoding */ $__lazy_storage_$_extensionViewController;
    void /* unknown type, empty encoding */ hostViewController;
}

- (id)init;
- (void).cxx_destruct;
- (void)hostViewController:(id)a0 didEndHosting:(id)a1 error:(id)a2;
- (void)hostViewController:(id)a0 didFailToHost:(id)a1 error:(id)a2;
- (void)hostViewController:(id)a0 didPrepareToHost:(id)a1;

@end
