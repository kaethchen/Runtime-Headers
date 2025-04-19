@class NSString, AMSKeychainOptions, NSDictionary, ACAccount, AMSProcessInfo, LAContext;
@protocol AMSBagProtocol;

@interface AMSBiometricsSignatureRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) ACAccount *account;
@property (retain) id<AMSBagProtocol> bag;
@property (readonly, copy) NSString *challenge;
@property (readonly, copy) AMSProcessInfo *clientInfo;
@property (getter=isDualAction) BOOL dualAction;
@property (readonly) AMSKeychainOptions *keychainOptions;
@property (readonly) NSDictionary *localAuthOptions;
@property (getter=shouldUseApplePayClassic) BOOL useApplePayClassic;
@property (getter=shouldUseAutoEnrollment) BOOL useAutoEnrollment;
@property (readonly) struct __SecAccessControl { } *localAuthAccessControlRef;
@property (readonly) LAContext *localAuthContext;

+ (id)biometricsSignatureRequestForURLResponse:(id)a0 account:(id)a1 session:(id)a2 task:(id)a3 clientInfo:(id)a4 options:(id)a5 error:(id *)a6;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_localAuthOptions;
- (id)initWithAccount:(id)a0 clientInfo:(id)a1 challenge:(id)a2 localAuthContext:(id)a3 options:(id)a4 error:(id *)a5;
- (void)setLocalAuthAccessControlRef:(struct __SecAccessControl { } *)a0;

@end
