@class LASecureIODoubleClick, NSMutableDictionary, NSDictionary, NSData, LASecureIOCommunication, NSObject, CoreKDL;
@protocol OS_os_transaction;

@interface LASecureIOServer : NSObject <LASecureIOCommunicationDelegate> {
    long long _currentSceneID;
    long long _currentOperationID;
    NSObject<OS_os_transaction> *_transaction;
    NSData *_currentInstructionsData;
    NSDictionary *_currentInstructions;
    NSData *_currentCredentialSet;
    CoreKDL *_kdl;
    NSMutableDictionary *_scenes;
    NSDictionary *_scenesDescriptions;
    LASecureIODoubleClick *_doubleClick;
}

@property (retain) LASecureIOCommunication *communication;

+ (id)server;
+ (id)getBootArgs;
+ (BOOL)ignoreSceneDescriptionsSignature;
+ (BOOL)ignoreWarsawInstructionSignature;
+ (BOOL)isBootArgSet:(id)a0;
+ (BOOL)isTestingEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)getCurrentScene;
- (long long)handleDFRConnectionInterruption;
- (long long)createCredentialForType:(unsigned int)a0;
- (long long)generateScenesFromInstructions:(id)a0 andDescriptions:(id)a1;
- (id)getAssetWithKey:(id)a0 FromCatalog:(id)a1;
- (id)getScene:(long long)a0 ForOperation:(long long)a1;
- (id)getScenesDescriptionLanguage:(id)a0;
- (id)getValuefromInstructions:(id)a0 withKey:(id)a1 andClass:(Class)a2;
- (long long)handleGetLoadedSceneCountCommand:(id)a0 withResponse:(id *)a1;
- (long long)handlePostNotificationCommand:(id)a0;
- (long long)handleRequestCommand:(unsigned int)a0 version:(id)a1 withData:(id)a2 andResponse:(id *)a3;
- (long long)handleSetInstructionsWithCredentialSetCommand:(id)a0;
- (long long)handleSetSceneDescriptionCommand:(id)a0;
- (long long)handleShowSceneCommand:(id)a0;
- (long long)handleUpdateKextBlacklistCommand:(id)a0;
- (long long)handleUserInput:(long long)a0;
- (long long)hideCurrentScene;
- (long long)initServer;
- (long long)invalidateCurrentCredentialSet;
- (long long)parseWarsawInstructions:(id)a0 forOperation:(long long)a1;
- (long long)sendCredentialSetUpdated:(id)a0;
- (void)setCurrentOperationID:(long long)a0;
- (long long)setupCredentialsForCurrentCredentialSetWithOperation:(long long)a0 andScene:(long long)a1;
- (long long)showScene:(long long)a0 forOperation:(long long)a1;
- (long long)updateAsset:(id)a0 fromInstructions:(id)a1 withKey:(id)a2;
- (long long)verifyInstructions:(id)a0 withSignature:(id)a1;
- (long long)verifySceneDesciptions:(id)a0 withSignature:(id)a1;

@end
