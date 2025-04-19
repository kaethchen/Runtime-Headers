@class NSDictionary;

@interface SDPommesSynonyms : NSObject {
    NSDictionary *firstPassSynonymDictionary;
    NSDictionary *secondPassSynonymDictionary;
    NSDictionary *dateSynonymDictionary;
}

- (id)init;
- (void).cxx_destruct;
- (id)_cleanWord:(id)a0 unacceptableCharSet:(id)a1;
- (void)loadSecondPassSynonymDictionary;
- (BOOL)_loadSynonymsFromFile:(id)a0 isFirstPass:(BOOL)a1 isDate:(BOOL)a2 error:(id *)a3;
- (id)generateDateSynonymsFromToken:(id)a0 previousToken:(id)a1 isOrdinalToken:(BOOL *)a2;
- (id)getDateSynonymsForWord:(id)a0;
- (id)getFirstPassSynonymsForWord:(id)a0;
- (id)getSecondPassSynonymsForWord:(id)a0;
- (void)loadDateSynonymDictionary;
- (void)loadFirstPassSynonymDictionary;

@end
