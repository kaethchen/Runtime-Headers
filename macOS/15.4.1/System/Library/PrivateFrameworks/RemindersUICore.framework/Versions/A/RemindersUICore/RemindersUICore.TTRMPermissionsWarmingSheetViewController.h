@class NSString;

@interface RemindersUICore.TTRMPermissionsWarmingSheetViewController : NSViewController {
    void /* unknown type, empty encoding */ $__lazy_storage_$_permissionsPromptView;
    void /* unknown type, empty encoding */ primaryButtonAction;
    void /* unknown type, empty encoding */ secondaryButtonAction;
}

@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)primaryButtonDidPress;
- (void)secondaryButtonDidPress;

@end
