@class NSArray, NSDictionary, ISDialogButton, NSString, NSLock, NSMutableDictionary;
@protocol ISDialogDelegate;

@interface ISDialog : NSObject <NSSecureCoding> {
    NSLock *_lock;
    NSMutableDictionary *_userInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) ISDialogButton *okButton;
@property (readonly) ISDialogButton *cancelButton;
@property (readonly) ISDialogButton *otherButton;
@property (readonly) ISDialogButton *suppressionCheckbox;
@property (readonly) NSDictionary *baseDictionary;
@property (retain) NSArray *buttons;
@property long long defaultButtonIndex;
@property BOOL oneButtonPerLine;
@property BOOL groupsTextFields;
@property (retain) NSArray *textFields;
@property (retain) NSString *message;
@property (retain) NSString *title;
@property BOOL allowDuplicates;
@property BOOL authorizationIsForced;
@property BOOL dismissOnLock;
@property BOOL expectsResponse;
@property long long kind;
@property (readonly) NSDictionary *authenticationParameters;
@property (readonly) BOOL needsDedicatedUI;
@property (weak, nonatomic) id<ISDialogDelegate> delegate;

+ (id)dialogWithError:(id)a0;
+ (id)dialogWithDictionary:(id)a0;
+ (void)dismissDialogWithDictionary:(id)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithError:(id)a0;
- (void)performAction:(long long)a0;
- (id)initWithTitle:(id)a0 message:(id)a1;
- (long long)_kindForString:(id)a0;
- (id)initWithAuthenticationChallege:(id)a0;
- (id)_appWindow;
- (id)_bundleForStoreClient:(id)a0 authenticationReason:(long long)a1;
- (void)_gotoFollowUpURL:(id)a0;
- (void)_runModalWithSettings:(id)a0 completionHandler:(id /* block */)a1;
- (id)copyUserNotification;
- (void)dismissDialogWithExitCode:(long long)a0;
- (void)handleDismissNoficiation:(id)a0;
- (id)initWithDialogDictionary:(id)a0;
- (void)setValue:(id)a0 forUserInfoKey:(id)a1;
- (BOOL)shouldDismissWithReturnCode:(long long)a0 userInfo:(id *)a1;
- (void)stopModalForDialog:(id)a0;
- (id)valueForUserInfoKey:(id)a0;

@end
