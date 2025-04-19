@interface CKVAssistantSettingsBridge : NSObject

+ (id)buildVersion;
+ (id)currentDictationLanguageCodes;
+ (id)currentSiriLanguageCode;
+ (id)getConformingSharedUserIds;
+ (BOOL)isASRSupported;
+ (BOOL)isAssistantEnabled;
+ (BOOL)isCustomerInstall;
+ (BOOL)isDictationEnabled;
+ (BOOL)isLinkVocabularyEnabled;
+ (BOOL)isOfflineDictationSupported;
+ (BOOL)isSiriMuxSupported;
+ (BOOL)isSiriUODSupported;
+ (BOOL)isSiriUODwithASROnServerSupported;
+ (BOOL)isSpeechProfileEnabled;

- (id)init;

@end
