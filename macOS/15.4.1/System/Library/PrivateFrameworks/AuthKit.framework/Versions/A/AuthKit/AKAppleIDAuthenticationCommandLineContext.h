@class NSDate, NSString, AKChangePasswordController, AKCommandLineUtilities, AKForgotPasswordController, NSNumber;

@interface AKAppleIDAuthenticationCommandLineContext : AKAppleIDAuthenticationContext <AKAppleIDServerAuthenticationUIProvider>

@property (retain, nonatomic) NSString *smsSecurityCode;
@property (readonly, nonatomic) AKCommandLineUtilities *utility;
@property (readonly, nonatomic) NSString *rootPath;
@property (retain, nonatomic) AKChangePasswordController *changePasswordController;
@property (retain, nonatomic) AKForgotPasswordController *forgotPasswordController;
@property (copy, nonatomic) NSNumber *secondFactorCode;
@property (readonly, nonatomic) long long verificationType;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSDate *birthday;
@property (nonatomic) BOOL termsAccepted;
@property (copy, nonatomic) NSString *recoveryKey;
@property (copy, nonatomic) NSString *localSecret;
@property (copy, nonatomic) NSString *countryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_findMatchingElementWithName:(id)a0 inElement:(id)a1;
+ (id)ruiElementsAttributesWithName:(id)a0 data:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)_accountCreationRequestBodyFromResponseDictionary:(id)a0 shouldIncludePhoneNumber:(BOOL)a1 shouldIncludeForSecurityCode:(BOOL)a2;
- (id)_accountDictionary;
- (void)_beginDataTaskWithRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)_capabilityForUIDisplay;
- (void)_collectAndHandleTermsAndConditionsWithResponseDictionary:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)_collectAndPostSecondFactorCodeWithRequestBody:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (id)_createContextDictionaryFromResponse:(id)a0;
- (void)_handleServerUIBirthdayVerificationWithResponseDictionary:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)_handleServerUIPasswordVerificationWithResponseDictionary:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)_handleServerUIPhoneVerificationWithResponseDictionary:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)_handleServerUISMSVerificationWithResponseDictionary:(id)a0 statusCode:(long long)a1 configuration:(id)a2 completion:(id /* block */)a3;
- (void)_handleServerUIWithDictionary:(id)a0 statusCode:(long long)a1 configuration:(id)a2 completion:(id /* block */)a3;
- (id)_jsonPostbackDictionaryForCode:(id)a0 numberId:(id)a1;
- (id)_parseTrustedPhoneNumberFromResponseDictionary:(id)a0;
- (void)_presentServerUIWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (id)_promptForBirthday;
- (id)_promptForCountryCode;
- (id)_promptForFirstName;
- (id)_promptForLastName;
- (id)_promptForPassword;
- (id)_promptForPhoneNumber;
- (id)_promptForUsername;
- (id)_promptForVerificationCodeWithSecureEntry:(BOOL)a0 forTrustedNumber:(id)a1;
- (id)_promptUserForSelectionWithTrustedNumbers:(id)a0;
- (id)_promptUserForTermsWithResponseDictionary:(id)a0;
- (id)_rootPath;
- (void)_verifySecondFactorCodeWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)a0;
- (id)initWithVerificationType:(long long)a0;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)presentLoginAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)presentSecondFactorAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)presentServerProvidedUIWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)setNeedsNewAppleID:(BOOL)a0;

@end
