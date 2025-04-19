@interface SFUtilities : NSObject

+ (void)initialize;
+ (id)defaultClientID;
+ (id)aneSubType;
+ (BOOL)canAccessPathAt:(id)a0 methodName:(id)a1 error:(id *)a2;
+ (BOOL)isANETypeAtLeastVersion:(int)a0 prefix:(id)a1;
+ (id)transcriptionFromSpeechPhrases:(id)a0 afAudioAnalytics:(id)a1 utteranceStart:(double)a2;
+ (id)speechProfilePathsWithLanguage:(id)a0;
+ (void)supportedLocalesWithCompletion:(id /* block */)a0;
+ (id)_alignTokenToFirstSeenPartialResult:(id)a0 tokenIndex:(unsigned long long)a1 firstSeenPartialResultTokens:(id)a2 firstSeenPartialResultIndex:(unsigned long long)a3;
+ (id)_firstSeenPartialResultIndicesForTokens:(id)a0 firstSeenPartialResultTokens:(id)a1;
+ (id)alignedPartialResultIndicesForTokens:(id)a0 firstSeenPartialResultTokens:(id)a1;
+ (id)allSpeechProfileContainersForSharedUserInfos:(id)a0;
+ (unsigned long long)cooldownTimerTimeoutSeconds;
+ (void)createDirPath:(id)a0;
+ (id)generalASRLanguageForLocaleIdentifier:(id)a0;
+ (id)getNormString:(id)a0;
+ (BOOL)isCacheDirInternal;
+ (BOOL)isGeneralASRSupportedOnDevice;
+ (BOOL)isSpeechXPCEnabled;
+ (id)issueReadSandboxExtensionForFilePath:(id)a0 error:(id *)a1;
+ (id)issueReadWriteSandboxExtensionForDirectoryPath:(id)a0 error:(id *)a1;
+ (id)languageCodeForLocaleIdentifier:(id)a0;
+ (id)languageCodeStringForLanguageString:(id)a0;
+ (id)languageStringForLocaleString:(id)a0;
+ (void)loadSpeechProfiles:(id)a0 language:(id)a1;
+ (void)loadSpeechProfiles:(id)a0 speechProfileContainers:(id)a1 language:(id)a2;
+ (id)localeCodeForLocale:(id)a0;
+ (id)localeStringForLanguageString:(id)a0;
+ (id)recognitionMetadataFromSpeechPhrases:(id)a0 afAudioAnalytics:(id)a1 utteranceStart:(double)a2;
+ (id)recognizedResultFromPackage:(id)a0;
+ (id)sandboxExtensionsForUsingANEAndAssets;
+ (id)speechProfileDateLastModifiedForLanguage:(id)a0;
+ (id)speechProfilePathsForLanguage:(id)a0;
+ (id)speechProfilePathsForLanguage:(id)a0 personaId:(id)a1;
+ (id)speechProfilePathsForLanguage:(id)a0 speechProfileContainers:(id)a1;
+ (id)speechProfilePathsForLanguage:(id)a0 userType:(id)a1;
+ (id)speechProfilePathsWithLanguage:(id)a0 sharedUserInfos:(id)a1;
+ (id)speechProfileRootDirectories;
+ (id)speechProfileRootDirectoriesWithUserType:(id)a0;
+ (id)stringByReplacingHyphensWithUnderscores:(id)a0;
+ (id)stringByReplacingUnderscoresWithHyphens:(id)a0;
+ (id)taskNameFromTaskHint:(long long)a0;
+ (id)transcriptionsWithTokens:(id)a0;
+ (id)userSpecificSpeechProfileContainersForSharedUserInfos:(id)a0;

@end
