@class NSArray;
@protocol NLAsset;

@interface CDMShortcutService : CDMDAGBaseService {
    id<NLAsset> _nlAsset;
}

@property (retain, nonatomic) NSArray *denyList;

+ (BOOL)isAssetRequired;
+ (id)getCDMServiceAssetConfig;
+ (id)voiceCommandPredicate;

- (void).cxx_destruct;
- (id)setup:(id)a0;
- (id)handle:(id)a0;
- (BOOL)shouldSpanComboProduceParse:(id)a0 prefixSpans:(id)a1 suffixSpans:(id)a2 tokenChain:(id)a3;
- (id)buildEmptyShortcutUserParse;
- (id)buildParseWithDelegatedUserDialogAct;
- (id)extractShortcutDataFromSpan:(id)a0;
- (id)filterExactMatchVoiceCommandSpans:(id)a0;
- (id)filterVoiceCommandPrefixMatchingSpans:(id)a0 voiceCommandSpan:(id)a1;
- (id)filterVoiceCommandSuffixMatchingSpans:(id)a0 voiceCommandSpan:(id)a1;
- (id)handleRequestCommandTypeNames;
- (id)handleVoiceCommandFollowUp:(id)a0;
- (BOOL)hasAutoShortcutIdentifier:(id)a0;
- (BOOL)isPhrase:(id)a0 inDenyList:(id)a1;
- (id)loadDenyListFromBundle:(id)a0 languageCode:(id)a1;
- (id)validateDenyListArray:(id)a0;

@end
