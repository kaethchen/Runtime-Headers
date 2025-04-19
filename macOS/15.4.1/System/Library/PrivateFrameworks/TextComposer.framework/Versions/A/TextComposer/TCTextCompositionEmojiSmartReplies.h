@class EMFEmojiPreferencesClient, NSMutableDictionary, EMFEmojiLocaleData, NSArray;

@interface TCTextCompositionEmojiSmartReplies : NSObject {
    EMFEmojiPreferencesClient *_preferencesClient;
    EMFEmojiLocaleData *_localeData;
    NSMutableDictionary *_emojiToIndex;
    NSArray *_equivalentEmojiSets;
    NSArray *_allowList;
}

+ (BOOL)isEmoji:(id)a0;
+ (BOOL)containsEmoji:(id)a0;
+ (id)emojiContentsArray:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)filterEmojis:(id)a0;
- (id)postProcessEmoji:(id)a0 excludeSet:(id)a1;

@end
