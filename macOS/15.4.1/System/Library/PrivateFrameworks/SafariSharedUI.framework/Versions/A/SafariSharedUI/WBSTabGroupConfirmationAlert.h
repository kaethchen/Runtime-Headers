@class WBTabGroup, NSString, WBTabGroupManager, NSAlert;
@protocol WBSTabGroupConfirmationAlertDelegate;

@interface WBSTabGroupConfirmationAlert : NSObject {
    NSAlert *_alert;
    BOOL _automaticallyConfirm;
    NSString *_confirmButtonTitle;
    NSString *_message;
    id /* block */ _resultHandler;
    NSString *_title;
}

@property (readonly, nonatomic) WBTabGroup *tabGroup;
@property (readonly, nonatomic) WBTabGroupManager *tabGroupManager;
@property (nonatomic) long long role;
@property (weak, nonatomic) id<WBSTabGroupConfirmationAlertDelegate> delegate;

+ (id)deleteConfirmationAlertWithTabGroup:(id)a0 manager:(id)a1 delegate:(id)a2;

- (void).cxx_destruct;
- (void)presentFromWindow:(id)a0 withResultHandler:(id /* block */)a1;
- (void)_configureAlert;
- (void)_handleResult:(BOOL)a0;
- (void)_initializeStringsForDeleteConfirmation;
- (id)_representativeHost;

@end
