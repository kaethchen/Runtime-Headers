@interface PXWallpaperSmartAlbumPeoplePickerDataSource : PXPassiveContentPeoplePickerDataSourceBase

+ (void)personsForPrimarySuggestionSubtype:(unsigned short)a0 secondarySuggestionSubtype:(unsigned short)a1 excludingPersonLocalIdentifiers:(id)a2 photoLibrary:(id)a3 results:(id /* block */)a4;

- (void)computeAndCachePersonsWithPersonLocalIdentifierWithNegativeFeedback:(id)a0;
- (id)peopleSuggestionSubtypes;

@end
