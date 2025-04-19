@class NSURL, NSDictionary, NSNumber;

@interface UABaseSystem : NSObject

@property (copy, nonatomic) NSURL *testingPrebootURL;
@property (copy, nonatomic, setter=_setPrebootPreferences:) NSDictionary *_prebootPreferences;
@property (readonly, nonatomic) NSNumber *_overriddenAccessibilityType;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) unsigned long long accessibilityType;
@property (readonly, nonatomic) BOOL hasPairedSystemPartition;
@property (readonly, nonatomic) BOOL hasPreboot;
@property (copy, nonatomic) NSDictionary *featurePreferences;

+ (id)shared;
+ (id)_voiceIdInDict:(id)a0;
+ (id)_generalLangForLang:(id)a0;
+ (id)_prebootUUID;
+ (id)_standardizeLangForLang:(id)a0;
+ (id)_voiceIdInFolder:(id)a0;

- (void).cxx_destruct;
- (id)pathToVoiceData;
- (id)_bestSynthForPreferredLanguages:(id)a0;
- (BOOL)_canWriteToPrebootDirectly;
- (BOOL)_copyPath:(id)a0 toPath:(id)a1;
- (void)_createDirectoryAtPath:(id)a0 attributes:(id)a1 error:(id *)a2;
- (void)_createFileWithContents:(id)a0 path:(id)a1 attributes:(id)a2 error:(id *)a3;
- (id)_errorLog;
- (id)_expectedOSInstallSpecificPrebootURL;
- (id)_mountedOSInstallSpecificPrebootURL;
- (id)_mountedPrebootPreferencesURL;
- (id)_mountedPrebootURLWithPatchComponent:(id)a0;
- (id)_mountedPrebootVoicePrefURL;
- (id)_mountedPrebootVoiceURL;
- (id)_possiblePrebootVoiceLanguages;
- (BOOL)_removePrebootDataAtURL:(id)a0 error:(id *)a1;
- (void)_saveSynthToPrebootPreferredLanguages:(id)a0;
- (id)_voiceData;
- (BOOL)_writePrebootData:(id)a0 toURL:(id)a1 error:(id *)a2;
- (void)_writeVoiceIDToPrebootPrefs:(id)a0;
- (BOOL)isRunningInFVUnlock;
- (id)prebootPath;
- (id)preferredVoice;
- (void)saveSynthToPreboot;

@end
