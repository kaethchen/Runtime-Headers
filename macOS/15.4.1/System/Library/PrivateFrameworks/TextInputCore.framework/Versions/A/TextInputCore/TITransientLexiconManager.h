@class NSString, NSXPCConnection, TISupplementalLexiconController, NSObject;
@protocol _ICLexiconManaging;

@interface TITransientLexiconManager : NSObject <TISupplementalLexiconControllerDelegate, TITransientLexiconManaging> {
    struct _LXLexicon { } *_namedEntityLexiconRef;
    struct _LXLexicon { } *_namedEntityPhraseLexiconRef;
    void *_namedEntityLexicons;
    void *_namedEntityPhraseLexicons;
    void *_addressBookLexicons;
    void *_appNameLexicons;
    NSObject<_ICLexiconManaging> *_inputContextLexiconManager;
    TISupplementalLexiconController *_supplementalLexicons;
    BOOL _lexiconsLoaded;
}

@property (retain, nonatomic, setter=_setOverridingCurrentConnectionForTesting:) NSXPCConnection *_overridingCurrentConnectionForTesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct _LXLexicon { } *namedEntityLexicon;
@property (readonly, nonatomic) struct _LXLexicon { } *namedEntityPhraseLexicon;
@property (readonly, nonatomic) TISupplementalLexiconController *ensureSupplementalLexicons;
@property (readonly, nonatomic) TISupplementalLexiconController *supplementalLexicons;
@property (nonatomic, getter=isSupplementalLexiconSearchEnabled) BOOL supplementalLexiconSearchEnabled;

+ (id)sharedInstance;
+ (id)singletonInstance;
+ (id)getEntries:(struct _LXLexicon { } *)a0;
+ (void)setSharedTITransientLexiconManager:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_currentConnection;
- (void)performMaintenance;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void)removeContactObserver:(id /* block */)a0;
- (void)loadLexicons;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (struct _LXLexicon { } *)addressBookLexiconForLocale:(const char *)a0;
- (struct _LXLexicon { } *)appNameLexiconForLocale:(const char *)a0;
- (void)debugLogEntities;
- (struct _LXLexicon { } *)filterLexicon:(struct _LXLexicon { } *)a0 againstLocale:(struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } *)a1;
- (struct _LXLexicon { } *)filteredLexicon:(struct _LXLexicon { } *)a0 fromLexiconCache:(void *)a1 forLocale:(const char *)a2;
- (void)getOnce:(id /* block */)a0;
- (void)namedEntitiesUpdateCallback;
- (struct _LXLexicon { } *)namedEntityLexiconForLocale:(const char *)a0;
- (struct _LXLexicon { } *)namedEntityPhraseLexiconForLocale:(const char *)a0;
- (void)registerNamedEntitiesUpdateCallback;
- (void)releaseCachedNamedEntityLexicons;
- (BOOL)searchForWord:(id)a0;
- (BOOL)searchForWordCaseInsensitive:(id)a0;
- (BOOL)searchHelper:(struct _LXLexicon { } *)a0 forWord:(struct __CFString { } *)a1 caseSensitive:(BOOL)a2;
- (void)supplementalLexiconControllerProcessDidTerminate:(id)a0;

@end
