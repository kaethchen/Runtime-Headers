@class NSObject, TISupplementalLexicon, NSMutableDictionary;
@protocol TISupplementalLexiconControllerDelegate, OS_dispatch_source;

@interface TISupplementalLexiconController : NSObject {
    NSMutableDictionary *_lexicons;
    NSMutableDictionary *_entityStores;
    unsigned long long _activeLexiconIdentifier;
    NSObject<OS_dispatch_source> *_processExitDispatchSource;
    BOOL _needsAtSignSearchPrefixQuirk;
}

@property (readonly, nonatomic) int connectionIdentifier;
@property (readonly, nonatomic) struct _LXLexicon { } *activeWordLexicon;
@property (readonly, nonatomic) struct _LXLexicon { } *activePhraseLexicon;
@property (readonly, nonatomic) TISupplementalLexicon *activeLexicon;
@property (weak, nonatomic) id<TISupplementalLexiconControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)setActiveLexiconWithIdentifier:(unsigned long long)a0;
- (void)addLexicon:(id)a0;
- (void)clearActiveLexicon;
- (id)identifiersOfItemsEqualToMecrabraCandidate:(id)a0;
- (id)lexiconIdentifiers;
- (id)lexiconWithIdentifier:(unsigned long long)a0;
- (void)removeLexiconWithIdentifier:(unsigned long long)a0;

@end
