@class AFEnablementConfiguration, NSArray, NSObject, AFEnablementFlowConfigurationProvider;
@protocol OS_dispatch_queue;

@interface SRFEnablementFlowConfigurationProvider : NSObject

@property (readonly) AFEnablementConfiguration *enablementConfiguration;
@property (readonly) NSObject<OS_dispatch_queue> *enablementConfigurationAccessQueue;
@property (readonly) AFEnablementFlowConfigurationProvider *enablementFlowConfigurationProvider;
@property (readonly, nonatomic) long long enablementFlow;
@property (copy, nonatomic) NSArray *recognitionLanguageCodes;

+ (id)_normalizedRecognitionLanguageCode:(id)a0;
+ (id)_normalizedRecognitionLanguageCodes:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)requiresVoiceSelectionForRecognitionLanguage:(id)a0;
- (BOOL)voiceSelectionAllowsRandomSelection;
- (void)_retrieveEnablementConfiguration;
- (id)initWithEnablementFlow:(long long)a0 recognitionLanguageCodes:(id)a1;
- (void)logCompletionDidEnable:(BOOL)a0;

@end
