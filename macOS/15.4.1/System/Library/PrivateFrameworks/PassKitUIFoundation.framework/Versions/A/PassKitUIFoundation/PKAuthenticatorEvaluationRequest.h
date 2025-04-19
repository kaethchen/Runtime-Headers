@class NSString, NSData, PKPaymentInstructions, NSNumber;

@interface PKAuthenticatorEvaluationRequest : NSObject

@property (readonly, nonatomic) long long policy;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *processName;
@property (copy, nonatomic) NSNumber *processIdentifier;
@property (copy, nonatomic) NSString *PINTitle;
@property (copy, nonatomic) NSNumber *PINLength;
@property (retain, nonatomic) PKPaymentInstructions *instructions;
@property (retain, nonatomic) NSData *externalizedContext;
@property (nonatomic) struct __SecAccessControl { } *accessControlRef;
@property (copy, nonatomic) NSString *physicalButtonTitle;
@property (copy, nonatomic) NSString *passcodeTitle;
@property (copy, nonatomic) NSString *fallbackOptionTitle;
@property (nonatomic) BOOL hasInitialAuthenticatorState;
@property (nonatomic) unsigned long long initialAuthenticatorState;
@property (nonatomic) BOOL assumeBiometricOrPasscodeAvailable;
@property (nonatomic) BOOL passcodeOnly;
@property (nonatomic) unsigned long long maxBiometryFailures;
@property (nonatomic) BOOL useLegacyAuthenticator;
@property (nonatomic) BOOL useLocationBasedAuthorization;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPolicy:(long long)a0;

@end
