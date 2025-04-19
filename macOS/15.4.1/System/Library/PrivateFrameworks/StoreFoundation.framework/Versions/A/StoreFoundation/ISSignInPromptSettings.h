@class ISStoreClient, NSString, NSURL, ISAuthenticationContext, NSNumber, NSWindow;

@interface ISSignInPromptSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *titleString;
@property (retain) NSString *messageString;
@property (retain) NSString *defaultButtonString;
@property (retain) NSString *alternateButtonString;
@property (retain) NSString *otherButtonString;
@property (retain) NSString *suppressionCheckboxString;
@property (retain) NSNumber *suppressionCheckboxState;
@property (retain) NSURL *authenticateAccountURL;
@property (retain) NSWindow *sheetWindow;
@property (retain) ISAuthenticationContext *context;
@property (retain) ISStoreClient *storeClient;
@property BOOL needsDedicatedUI;
@property BOOL shouldUseAppStoreUI;
@property BOOL forceActivate;

+ (id)settingsWithTitle:(id)a0 message:(id)a1 defaultButton:(id)a2 alternateButton:(id)a3 otherButton:(id)a4 suppressionCheckbox:(id)a5 suppressionCheckboxState:(id)a6 authenticateAccountURL:(id)a7 authenticationContext:(id)a8 needsDedicatedUI:(BOOL)a9 storeClient:(id)a10;
+ (id)settingsWithTitle:(id)a0 message:(id)a1 defaultButton:(id)a2 alternateButton:(id)a3 otherButton:(id)a4 suppressionCheckbox:(id)a5 suppressionCheckboxState:(id)a6 authenticateAccountURL:(id)a7 authenticationContext:(id)a8 shouldUseAppStoreUI:(BOOL)a9 storeClient:(id)a10;
+ (id)settingsWithTitle:(id)a0 message:(id)a1 defaultButton:(id)a2 alternateButton:(id)a3 otherButton:(id)a4 suppressionCheckbox:(id)a5 suppressionCheckboxState:(id)a6 authenticateAccountURL:(id)a7 authenticationContext:(id)a8 storeClient:(id)a9;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_shortDescriptionForString:(id)a0;

@end
