@class NSMutableDictionary, NSLocale;

@interface PSITokenizer : NSObject {
    void *_tagger;
    BOOL _useCache;
    NSMutableDictionary *_cache;
}

@property (retain, nonatomic) NSLocale *locale;

+ (id)normalizeString:(id)a0;
+ (id)fts5StringFromString:(id)a0 forMatchType:(unsigned long long)a1;
+ (id)fts5StringFromString:(id)a0 useWildcard:(BOOL)a1;
+ (id)fts5StringFromString:(id)a0 useWildcard:(BOOL)a1 leadingAnchored:(BOOL)a2;
+ (id)ftsTokenizerName;

- (void)dealloc;
- (void).cxx_destruct;
- (id)normalizeString:(id)a0;
- (void)_tokenizeString:(id)a0 withContext:(struct { struct __CFString *x0; long long x1; struct tokenOutput_t *x2; unsigned short *x3; unsigned short *x4; long long x5; } *)a1;
- (id)initWithLocale:(id)a0 useCache:(BOOL)a1;
- (id)newTokensFromString:(id)a0 withOptions:(long long)a1 outCopyRanges:(id *)a2 error:(id *)a3;
- (int)registerFTS5TokenizerForDatabase:(struct sqlite3 { } *)a0;
- (void)tokenizeString:(id)a0 withOptions:(long long)a1 tokenOutput:(struct tokenOutput_t { id x0; id x1; id x2; struct *x3; long long x4; long long x5; struct *x6; long long x7; long long x8; } *)a2;

@end
