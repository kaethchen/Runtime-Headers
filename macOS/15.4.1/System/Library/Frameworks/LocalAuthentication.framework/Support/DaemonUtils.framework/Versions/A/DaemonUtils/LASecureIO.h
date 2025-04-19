@class LASecureIOCommunication, NSObject;
@protocol LASecureIODelegate;

@interface LASecureIO : NSObject {
    LASecureIOCommunication *_client;
}

@property (weak) NSObject<LASecureIODelegate> *delegate;

+ (id)secureIO;

- (id)init;
- (void).cxx_destruct;
- (long long)postNotification:(long long)a0;
- (id)getCurrentLanguage;
- (long long)getLoadedSceneCountForOperation:(long long)a0 andLanguage:(id)a1;
- (long long)getSceneCountForOperation:(long long)a0;
- (long long)getServerSupportedVersion;
- (long long)handleRequestCommand:(unsigned int)a0 version:(id)a1 withData:(id)a2 andResponse:(id *)a3;
- (long long)loadSceneDescriptionsForOperation:(long long)a0;
- (id)readSceneDescriptionFromFile:(id)a0;
- (long long)setInstructions:(id)a0 forOperation:(long long)a1 withCredentialSet:(id)a2;
- (long long)setSceneDescription:(id)a0 withSignature:(id)a1;
- (long long)setSceneDescriptionsforOperation:(long long)a0 andLanguage:(id)a1;
- (long long)showScene:(long long)a0 forOperation:(long long)a1;
- (long long)updateKextBlacklistFromPath:(id)a0;

@end
