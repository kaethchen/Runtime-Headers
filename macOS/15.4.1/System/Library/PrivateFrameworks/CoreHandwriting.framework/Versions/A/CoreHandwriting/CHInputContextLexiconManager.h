@class NSSet, NSArray, NSDictionary, NSMutableDictionary, _KSTextReplacementClientStore, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CHInputContextLexiconManager : NSObject {
    NSObject<OS_dispatch_queue> *_lexiconQueue;
    id /* block */ _contactsObserverBlock;
    id /* block */ _namedEntityObserverBlock;
    long long _initialUpdateCount;
    NSObject<OS_dispatch_queue> *_recognitionProcessingQueue;
    NSMutableDictionary *_textReplacements;
    _KSTextReplacementClientStore *_textReplacementStore;
    struct ObjectRef<void *> { void *mCFObject; } _vocabulary;
    NSMutableArray *_addressBook;
    struct ObjectRef<_LXLexicon *> { struct _LXLexicon *mCFObject; } _transientLexicon;
    struct ObjectRef<_LXLexicon *> { struct _LXLexicon *mCFObject; } _transientPhraseLexicon;
    struct ObjectRef<_LXLexicon *> { struct _LXLexicon *mCFObject; } _transientLexiconWithCustomEntries;
    NSSet *_lastCustomLexiconEntries;
}

@property (readonly, nonatomic) struct _LXLexicon { } *transientLexicon;
@property (readonly, nonatomic) struct _LXLexicon { } *transientPhraseLexicon;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *lexiconQueue;
@property (readonly, nonatomic) void *vocabulary;
@property (readonly, copy, nonatomic) NSDictionary *textReplacements;
@property (readonly, copy, nonatomic) NSArray *addressBookLexicon;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct _LXLexicon { } *)transientLexiconWithCustomEntries:(id)a0;

@end
