@class NFSession, NSArray, STSHardwareManagerWrapper, NSData, STSCredential;
@protocol NFSession;

@interface STSHandler : NSObject

@property (retain, nonatomic) STSHardwareManagerWrapper *nfHwManager;
@property (retain, nonatomic) id<NFSession> startedNFSession;
@property (retain, nonatomic) NSData *unusedHandoffToken;
@property (weak, nonatomic) NFSession *activeChildSession;
@property (readonly, nonatomic) STSCredential *activeSTSCredential;
@property (readonly, nonatomic) NSArray *activeSTSCredentials;
@property (readonly, nonatomic) unsigned char supportedCredentialType;

- (void).cxx_destruct;
- (void)_tearDown;
- (id)setActiveCredential:(id)a0;
- (id)setActiveCredentials:(id)a0;
- (void)tearDownWithCompletion:(id /* block */)a0;
- (BOOL)activateChildSessionOnSetActiveCredential;
- (id)activateWithHandoffToken:(id)a0;
- (id)consumeHandoffToken;
- (id)createHandoffTokenFromSession:(id)a0 outError:(id *)a1;
- (id)nfHardwareManager;
- (void)retainUnusedHandoffToken:(id)a0;
- (id)startNFSessionWithCompletion:(id /* block */)a0;

@end
