@class NSArray, NSMutableDictionary, NSOperationQueue, _KSTextReplacementClientStore, NSMutableArray;

@interface JIMSharedSyncObserver : NSObject

@property (retain) NSOperationQueue *asyncTaskQueue;
@property (retain) _KSTextReplacementClientStore *textReplacementClientStore;
@property (retain) NSArray *cachedTextReplacementEntries;
@property (retain) NSArray *cachedContactsEntries;
@property (retain) NSMutableArray *cachedSpecialtyDictionaries;
@property (retain) NSMutableDictionary *validObservers;
@property BOOL isRunning;

+ (void)removeObserver:(id)a0;
+ (BOOL)isRunning;
+ (id)_sharedSyncObserver;
+ (void)addObserverforContactsChange:(id)a0 selector:(SEL)a1;
+ (void)addObserverforSpecialtyDictionaryChange:(id)a0 selector:(SEL)a1;
+ (void)addObserverforTextReplacementChange:(id)a0 selector:(SEL)a1;
+ (void)loadTextReplacementEntries;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_addNamesForRecord:(id)a0 toArray:(id)a1 checkDuplicateDictionary:(id)a2;
- (id)_generateHiraganaString:(id)a0;
- (id)_loadContactsEntries;
- (id)_loadPhraseShortcutPairs;
- (void)_loadSpecialtyDictionaries:(id)a0;
- (id)_phoneticStringForFirstName:(BOOL)a0 inRecord:(id)a1;
- (void)_prepareContactsSync;
- (void)_prepareSpecialtyDictionaries;
- (void)_prepareTextReplacementSync;

@end
