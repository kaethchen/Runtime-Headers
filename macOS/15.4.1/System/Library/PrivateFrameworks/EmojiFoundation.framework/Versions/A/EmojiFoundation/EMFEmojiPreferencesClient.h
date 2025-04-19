@class NSString, NSXPCConnection;

@interface EMFEmojiPreferencesClient : EMFEmojiPreferences {
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSString *machName;
@property (nonatomic) BOOL isValid;

+ (id)serviceInterface;

- (void)dealloc;
- (void).cxx_destruct;
- (void)didUseEmoji:(id)a0;
- (void)writeEmojiDefaults;
- (void)_disconnect;
- (id)initWithMachName:(id)a0;
- (id)_initWithoutConnection;
- (void)didUseEmojiInDictation:(id)a0 replacementContext:(id)a1;
- (void)createConnectionIfNecessary;
- (void)didDisplaySkinToneHelp;
- (void)didUseEmoji:(id)a0 usageMode:(id)a1;
- (id)copySortedEmojis:(id)a0 keyword:(id)a1 localeIdentifier:(id)a2;
- (void)didUseEmoji:(id)a0 usageMode:(id)a1 typingName:(id)a2;
- (void)didUseEmoji:(id)a0 usageMode:(id)a1 typingName:(id)a2 replacementContext:(id)a3;
- (void)didUseEmoji:(id)a0 usageSource:(unsigned long long)a1 replacementContext:(id)a2 searchQuery:(id)a3 resultPosition:(id)a4 numberSearchQueriesRun:(id)a5 wasPositiveEngagement:(BOOL)a6;
- (void)didUseEmojiInCharacterPickerExtended:(id)a0 finalQuery:(id)a1 resultIndex:(id)a2;
- (void)didUseEmojiInCharacterPickerLightweight:(id)a0 replacementContext:(id)a1;
- (void)didUseEmojiInCharacterPickerPopover:(id)a0 finalQuery:(id)a1 resultIndex:(id)a2;
- (void)didUseEmojiInDFRBar:(id)a0 replacementContext:(id)a1;
- (void)didUseEmojiInEmojiKeyboardPalette:(id)a0 wasFromRecentsSection:(BOOL)a1;
- (void)didUseEmojiInEmojiKeyboardSearch:(id)a0 finalQuery:(id)a1 resultIndex:(id)a2;
- (void)didUseEmojiInHandwriting:(id)a0 replacementContext:(id)a1;
- (void)didUseEmojiInKeyboardCandidateBar:(id)a0 candidatePosition:(id)a1 replacementContext:(id)a2;
- (void)didUseEmojiInKeyboardCandidateBar:(id)a0 replacementContext:(id)a1;
- (void)didViewEmojiIndex:(long long)a0 forCategory:(id)a1;
- (void)writeEmojiDefaultsAndNotify:(BOOL)a0;

@end
