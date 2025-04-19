@class NSString, NSArray;

@interface LiveSpeechServices : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_liveSpeechDefaults;
}

@property (class, nonatomic, readonly) LiveSpeechServices *shared;

@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSArray *liveSpeechPhrases;
@property (nonatomic, readonly) NSString *phraseTextKey;
@property (nonatomic, readonly) NSString *phraseShortcutKey;
@property (nonatomic, readonly) NSString *phraseInputIDKey;
@property (nonatomic, readonly) NSArray *favoritePhrases;

- (id)init;
- (void).cxx_destruct;
- (void)addFavoritePhrase:(id)a0;
- (id)observeFavoritePhrasesChanges:(id /* block */)a0;
- (void)removeFavoritePhrase:(id)a0;
- (id)observeFavoriteLiveSpeechPhrasesChanges:(id /* block */)a0;

@end
