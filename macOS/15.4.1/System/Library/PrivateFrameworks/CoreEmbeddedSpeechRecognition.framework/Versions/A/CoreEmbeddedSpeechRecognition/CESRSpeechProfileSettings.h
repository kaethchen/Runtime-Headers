@class NSSet, CESRSpeechProfileConfig, NSLocale;

@interface CESRSpeechProfileSettings : NSObject {
    NSLocale *_assistantLocale;
    NSSet *_dictationLocales;
    CESRSpeechProfileConfig *_speechProfileConfig;
}

+ (id)defaultSettings;
+ (BOOL)_instanceSupportsAssistant:(unsigned char)a0;
+ (BOOL)_instanceSupportsDictation:(unsigned char)a0;
+ (BOOL)_isSupportedAppIntentsIndexedEntityPartition:(id)a0 speechProfileConfig:(id)a1;
+ (void)disableOverrideAcceptAllSets;
+ (void)enableOverrideAcceptAllSets;

- (void).cxx_destruct;
- (BOOL)isSupportedSet:(id)a0 instanceOptions:(unsigned char)a1;
- (id)_assistantLocale;
- (id)_dictationLocales;
- (void)enumerateRequiredInstances:(id /* block */)a0;
- (id)initWithAssistantLocale:(id)a0 dictationLocales:(id)a1;
- (BOOL)isUserExclusiveSet:(id)a0;
- (BOOL)refreshLocales;
- (BOOL)refreshLocalesIfNeeded;

@end
