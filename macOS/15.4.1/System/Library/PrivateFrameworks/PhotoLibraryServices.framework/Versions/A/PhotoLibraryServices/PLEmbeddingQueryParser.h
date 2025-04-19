@interface PLEmbeddingQueryParser : NSObject

+ (void)_allowedAssetUUIDsForParsedDateInQuery:(id)a0 psiDatabase:(id)a1 resultsHandler:(id /* block */)a2;
+ (id)_fts5StringFromString:(id)a0;
+ (void)_searchParseQueryText:(id)a0 dateFilter:(id)a1 psiDatabase:(id)a2 completion:(id /* block */)a3;
+ (void)parseQueryText:(id)a0 photoLibrary:(id)a1 dateFilter:(id)a2 psiDatabase:(id)a3 queryDepersonalization:(unsigned long long)a4 completion:(id /* block */)a5;

@end
