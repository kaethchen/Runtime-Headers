@class SGTRecentsSuggesterReserved;

@interface SGTRecentsSuggester : SGTSuggester {
    SGTRecentsSuggesterReserved *_reserved2;
}

+ (void)_checkInDefaultsGlobal:(BOOL)a0 saveName:(id)a1;
+ (id)_checkOutDefaultsGlobal:(BOOL)a0 saveName:(id)a1;
+ (void)_globalChangeNotification:(id)a0;
+ (BOOL)_isThisUserInfoForThisProcess:(id)a0;
+ (void)_postGlobalChange:(id)a0;
+ (void)_startListeningToGlobalChange:(id)a0;
+ (void)_stopListeningToGlobalChange:(id)a0;
+ (id)_userInfoForThisProcess;
+ (id)suggesterWithSaveName:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setInput:(id)a0;
- (void)_performBlock:(id /* block */)a0;
- (void)_addSavedObject:(id)a0 stringValue:(id)a1;
- (void)_saveToDefaults;
- (void)_performBlockOnMainThread:(id /* block */)a0;
- (id)_recentValueFromSavedObject:(id)a0;
- (void)_removeLegacyGlobalDomainDefaultsEntriesWithSaveName:(id)a0;
- (id)_savedObjectFromSuggestion:(id)a0;
- (void)_searchFieldDidValidateSuggestion:(id)a0;
- (id)_staticSuggestionDisplayNames;
- (id)_suggestionFromSavedObject:(id)a0 genius:(id)a1;
- (void)_updateFromDefaults;
- (void)addRecentSearchString:(id)a0;
- (void)addRecentSuggestion:(id)a0;
- (BOOL)canHaveStaticSuggestions;
- (id)categoryForSuggestion:(id)a0;
- (void)clearRecents;
- (id)initWithSaveName:(id)a0;
- (id)initWithSaveName:(id)a0 global:(BOOL)a1;
- (id)staticSuggestions;

@end
