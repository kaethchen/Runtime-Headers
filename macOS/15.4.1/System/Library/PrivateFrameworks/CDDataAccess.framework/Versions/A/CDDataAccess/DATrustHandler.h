@class NSMutableDictionary;
@protocol DATrustHandlerDelegate;

@interface DATrustHandler : NSObject

@property (weak, nonatomic) id<DATrustHandlerDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *haveWarnedAboutCertDict;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)setHaveWarnedAboutCert:(id)a0 forHost:(id)a1;
- (id)_serverSuffixesToAlwaysFail;
- (unsigned int)evaluateTrust:(struct __SecTrust { } *)a0;
- (void)handleTrust:(struct __SecTrust { } *)a0 forHost:(id)a1 forAccount:(id)a2 withCompletionBlock:(id /* block */)a3;
- (BOOL)handleTrustChallenge:(id)a0 forAccount:(id)a1;
- (BOOL)handleTrustChallenge:(id)a0 forAccount:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)haveWarnedAboutCert:(id)a0 forHost:(id)a1;
- (BOOL)resetCertWarnings;

@end
