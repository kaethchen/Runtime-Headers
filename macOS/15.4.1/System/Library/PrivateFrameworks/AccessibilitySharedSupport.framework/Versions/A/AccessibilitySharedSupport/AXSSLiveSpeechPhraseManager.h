@class NSArray;
@protocol AXSSLiveSpeechPhraseManagerDelegate;

@interface AXSSLiveSpeechPhraseManager : NSObject

@property (retain, nonatomic) id favoritePhraseObserverToken;
@property (weak, nonatomic) id<AXSSLiveSpeechPhraseManagerDelegate> delegate;
@property (retain, nonatomic) NSArray *savedPhrases;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_addSavedPhrase:(id)a0;
- (void)_removeSavedPhrase:(id)a0;
- (void)startObservingChanges;

@end
