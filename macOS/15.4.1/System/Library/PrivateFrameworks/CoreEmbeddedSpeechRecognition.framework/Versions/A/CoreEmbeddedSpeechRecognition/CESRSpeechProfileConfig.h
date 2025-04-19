@class NSString, CESRContextualEntityConfig, CESRAppEntityConfig;

@interface CESRSpeechProfileConfig : NSObject

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSString *trialNamespace;
@property (readonly, nonatomic) CESRAppEntityConfig *appEntityConfig;
@property (readonly, nonatomic) CESRContextualEntityConfig *contextualEntityConfig;

+ (id)_defaultConfigFilePath;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (BOOL)_parseJsonObject:(id)a0;

@end
