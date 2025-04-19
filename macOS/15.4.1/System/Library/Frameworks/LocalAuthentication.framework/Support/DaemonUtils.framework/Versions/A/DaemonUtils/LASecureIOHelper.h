@class NSNumber, LASecureIO, NSMutableDictionary, NSData, LADFROwnerToken, CoreKDL;

@interface LASecureIOHelper : NSObject <LASecureIODelegate> {
    LASecureIO *_secureIO;
    long long _lastError;
    NSMutableDictionary *_inputHandlers;
    BOOL _sceneDirty;
}

@property (weak) LADFROwnerToken *currentDFROwner;
@property (readonly, nonatomic) CoreKDL *coreKDL;
@property (readonly) long long scene;
@property (readonly) NSData *externalizedContext;
@property (readonly) BOOL lastInstructionsWithoutDFR;
@property (readonly, nonatomic) NSNumber *currentKDLVersion;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (void)setInstructions:(id)a0 externalizedContext:(id)a1 reply:(id /* block */)a2;
- (BOOL)showScene:(long long)a0 error:(id *)a1;
- (id)_laErrorFromLASIOError:(long long)a0 method:(id)a1;
- (void)_setInstructions:(id)a0 externalizedContext:(id)a1 allowKDLUpdate:(BOOL)a2 reply:(id /* block */)a3;
- (id)cleanupToken;
- (void)credentialSetUpdated:(id)a0;
- (BOOL)postNotification:(long long)a0 error:(id *)a1;
- (void)setHandler:(id /* block */)a0 forInput:(long long)a1;
- (BOOL)updateKDLWithError:(id *)a0;
- (void)userInput:(long long)a0;

@end
