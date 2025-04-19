@class BloomFilter;

@interface VoiceTriggerRePromptUtil : NSObject

@property (retain) BloomFilter *bloomFilter;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initAndLoadImpactedAssistantIdsForRePrompt;
- (id)initAndLoadImpactedAssistantIdsForRePromptWithAsset:(id)a0;
- (BOOL)isRePromptableWithAssistantId:(id)a0;

@end
