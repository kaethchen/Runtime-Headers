@class ITLibrary, NSCharacterSet;

@interface ITLibAMPModelKindMapper : NSObject {
    ITLibrary *_library;
    NSCharacterSet *_capitalizedLetters;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithLibrary:(id)a0;
- (void)localeDidChange;
- (id)_artistsForResponse:(id)a0 needsItems:(BOOL)a1;
- (id)_albumsForResponse:(id)a0 needsItems:(BOOL)a1;
- (id)_albumsForResponse:(id)a0 needsItems:(BOOL)a1 propertyFilters:(id)a2;
- (id)_albumsForResponse:(id)a0 needsItems:(BOOL)a1 propertyFilters:(id)a2 needsTitledSections:(BOOL)a3;
- (id)_artistsForResponse:(id)a0 needsItems:(BOOL)a1 propertyFilters:(id)a2 needsAlbums:(BOOL)a3;
- (id)_artistsForResponse:(id)a0 needsItems:(BOOL)a1 propertyFilters:(id)a2 needsTitledSections:(BOOL)a3 needsAlbums:(BOOL)a4;
- (BOOL)_checkPropertyFilters:(id)a0 forMediaItem:(id)a1;
- (id)_genresDictionaryFromCandidateDictionary:(id)a0;
- (id)_genresForResponse:(id)a0 needsTitledSections:(BOOL)a1 needsAlbums:(BOOL)a2 filteringOptions:(unsigned long long)a3;
- (id)_itemsForResponse:(id)a0 needsItems:(BOOL)a1;
- (id)_itemsForResponse:(id)a0 needsItems:(BOOL)a1 propertyFilters:(id)a2;
- (id)_itemsForResponse:(id)a0 needsItems:(BOOL)a1 propertyFilters:(id)a2 needsTitledSections:(BOOL)a3;
- (id)_playlistsForResponse:(id)a0 needsItems:(BOOL)a1;
- (id)_playlistsForResponse:(id)a0 needsItems:(BOOL)a1 propertyFilters:(id)a2;
- (id)_playlistsForResponse:(id)a0 needsItems:(BOOL)a1 propertyFilters:(id)a2 needsTitledSections:(BOOL)a3;
- (void)_registerForLocaleNotification;
- (id)_titledSectionNameFromSectionItem:(id)a0;
- (id)processAMPLibResponse:(id)a0 fromAMPLibRequest:(id)a1;
- (id)processAMPLibSearchResponse:(id)a0 fromAMPLibSearchRequest:(id)a1;

@end
