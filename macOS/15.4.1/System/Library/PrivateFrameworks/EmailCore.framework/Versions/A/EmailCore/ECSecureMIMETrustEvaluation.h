@class NSArray, NSString, NSError, NSObject;
@protocol OS_os_log;

@interface ECSecureMIMETrustEvaluation : NSObject <EFLoggable, NSSecureCoding>

@property (class, copy, nonatomic) NSArray *anchorCertificatesForTesting;
@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct __SecTrust { } *trust;
@property (readonly, copy, nonatomic) NSString *signerEmailAddress;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned int trustResult;
@property (readonly, nonatomic) BOOL requiresReevaluationWithNetworkAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)evaluateTrust:(struct __SecTrust { } *)a0 withOptions:(unsigned long long)a1 signerEmailAddress:(id)a2;
+ (id)reevaluateWithNetworkAccessAllowed:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_evaluate;
- (id)_initWithTrust:(struct __SecTrust { } *)a0 options:(unsigned long long)a1 signerEmailAddress:(id)a2;

@end
