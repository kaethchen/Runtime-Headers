@class NSDictionary, NSMutableArray;

@interface TITransientLexiconManagerMock : NSObject {
    NSDictionary *_contactCollection;
    struct _LXLexicon { } *_namedEntityLexiconRef;
    struct _LXLexicon { } *_namedEntityPhraseLexiconRef;
    void *_addressBookLexicons;
    void *_appNameLexicons;
}

@property (readonly, nonatomic) NSMutableArray *observers;
@property (nonatomic) int offeredCount;
@property (nonatomic) int acceptedCount;
@property (nonatomic, getter=isSupplementalLexiconSearchEnabled) BOOL supplementalLexiconSearchEnabled;

+ (id)getEntries:(struct _LXLexicon { } *)a0;
+ (id)tokenizeEntity:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)unload;
- (id)supplementalLexicons;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void)removeContactObserver:(id /* block */)a0;
- (void)loadLexicons;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (struct _LXLexicon { } *)addressBookLexiconForLocale:(const char *)a0;
- (struct _LXLexicon { } *)appNameLexiconForLocale:(const char *)a0;
- (void)debugLogEntities;
- (id)ensureSupplementalLexicons;
- (void)getOnce:(id /* block */)a0;
- (struct _LXLexicon { } *)namedEntityLexicon;
- (struct _LXLexicon { } *)namedEntityLexiconForLocale:(const char *)a0;
- (struct _LXLexicon { } *)namedEntityPhraseLexicon;
- (struct _LXLexicon { } *)namedEntityPhraseLexiconForLocale:(const char *)a0;
- (BOOL)searchForWord:(id)a0;
- (BOOL)searchForWordCaseInsensitive:(id)a0;
- (BOOL)searchHelper:(struct _LXLexicon { } *)a0 forWord:(struct __CFString { } *)a1 caseSensitive:(BOOL)a2;
- (void)addEntry:(id)a0 toLexicon:(struct _LXLexicon { } *)a1;
- (id)initWithTransientData:(id)a0 namedEntities:(id)a1;
- (void)setNewContactCollection:(id)a0;

@end
