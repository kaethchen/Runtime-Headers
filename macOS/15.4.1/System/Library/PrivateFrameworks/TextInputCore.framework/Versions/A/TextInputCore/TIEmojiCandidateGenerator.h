@class NSArray, NSSet, TIInputMode, TIKeyboardInputManager;

@interface TIEmojiCandidateGenerator : NSObject {
    void *m_emojiGeneratorPrimaryLanguage;
    void *m_emojiGeneratorSecondaryLanguage;
    void *m_emojiGeneratorTertiaryLanguage;
    BOOL m_didAttemptPrimaryEmojiGeneratorLoad;
    BOOL m_didAttemptSecondaryEmojiGeneratorLoad;
    BOOL m_didAttemptTertiaryEmojiGeneratorLoad;
    BOOL m_shouldShowEmojis;
    struct __EmojiLocaleDataWrapper { } *m_emojiDataForPrimaryLocale;
    struct __EmojiLocaleDataWrapper { } *m_emojiDataForSecondaryLocale;
    struct __EmojiLocaleDataWrapper { } *m_emojiDataForTertiaryLocale;
    BOOL m_didAttemptPrimaryLocaleForEmojiLoad;
    BOOL m_didAttemptSecondaryLocaleForEmojiLoad;
    BOOL m_didAttemptTertiaryLocaleForEmojiLoad;
    BOOL m_isEmojiInputModeEnabled;
    NSSet *m_disabledLocales;
    TIKeyboardInputManager *m_inputManager;
}

@property (readonly, nonatomic) TIInputMode *primaryInputMode;
@property (retain, nonatomic) NSArray *activeInputModes;

- (void)dealloc;
- (void).cxx_destruct;
- (id)createAndAddEmojiTokensFrom:(struct __CFArray { } *)a0 inArray:(id)a1 forInputString:(id)a2;
- (id)emojiAdornmentCandidates:(id)a0;
- (id)emojiAdornmentCandidates:(id)a0 emojiGenerator:(void *)a1 emojiData:(struct __EmojiLocaleDataWrapper { } *)a2;
- (id)emojiAdornmentCandidatesForKeyboardState:(id)a0;
- (void)emojiAlternativesForText:(id)a0 completionHandler:(id /* block */)a1;
- (id)emojiAlternativesForText:(id)a0 matchedString:(id *)a1;
- (id)emojiAppendCandidates:(id)a0;
- (struct __EmojiLocaleDataWrapper { } *)emojiDataForInputModeIdx:(unsigned long long)a0;
- (void *)emojiGeneratorForInputModeIdx:(unsigned long long)a0;
- (long long)emojiPredominantInputModeIdxFromContext;
- (id)emojiReplacementCandidates:(id)a0;
- (id)emojiReplacementCandidates:(id)a0 matchedString:(id *)a1;
- (id)emojiReplacementCandidatesForKeyboardState:(id)a0;
- (id)emojiReplacementCandidatesForText:(id)a0;
- (void)emojiReplacementCandidatesForText:(id)a0 completionHandler:(id /* block */)a1;
- (id)enumerateForEmojiAlternativesInText:(id)a0 forEmojiLocaleData:(struct __EmojiLocaleDataWrapper { } *)a1 matchedString:(id *)a2;
- (id)enumerateForEmojiCandidatesIn:(id)a0 forEmojiLocaleData:(struct __EmojiLocaleDataWrapper { } *)a1 asReplacementCandidate:(BOOL)a2;
- (id)enumerateForEmojiCandidatesIn:(id)a0 forEmojiLocaleData:(struct __EmojiLocaleDataWrapper { } *)a1 asReplacementCandidate:(BOOL)a2 matchedString:(id *)a3;
- (id)extractTokensForEmojiComputation:(id)a0;
- (id)generateEmojiAdornmentCandidates:(id)a0;
- (id)getSkinToneSensitiveEmojis:(id)a0;
- (id)initWithActiveInputModes:(id)a0;
- (id)initWithActiveInputModes:(id)a0 inputManager:(id)a1;
- (BOOL)isLocaleDisabled:(id)a0;
- (id)randomShuffle:(id)a0;
- (id)skinToneModifiedAdornmentEmojis:(id)a0 forLocale:(struct __EmojiLocaleDataWrapper { } *)a1 forInput:(id)a2;
- (void)updateEmojiAdornmentGenerators;
- (void)updateEmojiLocale;
- (void)updateEmojiStatusForKeyboardState:(id)a0;
- (void)updateEmojiStatusForKeyboardType:(unsigned long long)a0 appIdentifier:(id)a1;
- (void)updateForActiveInputModes:(id)a0;
- (void)updateForMultilingualKeyboard:(id)a0;

@end
