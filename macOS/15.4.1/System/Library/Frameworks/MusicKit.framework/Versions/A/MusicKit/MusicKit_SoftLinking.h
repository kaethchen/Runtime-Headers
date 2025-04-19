@interface MusicKit_SoftLinking : NSObject

+ (id)artworkCatalogWithDataSourceShortDescription:(id)a0 dataSourceIdentifier:(id)a1 tokenParameters:(id)a2;
+ (id)emptyIdentifierSet;
+ (id)recentlySearchedUnarchiveUnderlyingIdentifierSetWithData:(id)a0 error:(id *)a1;
+ (void)_ensureConsistencyOfUnderlyingOptionSetsForAudioTraits;
+ (id)_identifierSetWithCatalogID:(id)a0 libraryID:(id)a1 cloudAlbumLibraryID:(id)a2 cloudID:(id)a3 reportingAdamID:(id)a4 purchasedAdamID:(id)a5 assetAdamID:(id)a6 deviceLocalID:(id)a7 possibleDeviceLocalID:(id)a8 occurrenceID:(id)a9 containedDeviceLocalID:(id)a10 syncID:(id)a11 playbackID:(id)a12 formerIDs:(id)a13 modelObjectType:(long long)a14 source:(long long)a15;
+ (BOOL)_isEntitledToUserDSID;
+ (long long)_libraryPersistentIDForStringValue:(id)a0;
+ (id)artworkCatalogWithStoreArtworkToken:(id)a0;
+ (long long)audioTraitsForRawValue:(long long)a0;
+ (id)identifierSetFromLegacyModelObject:(id)a0;
+ (id)identifierSetWithCatalogID:(id)a0 libraryID:(id)a1 cloudAlbumLibraryID:(id)a2 cloudID:(id)a3 reportingAdamID:(id)a4 purchasedAdamID:(id)a5 assetAdamID:(id)a6 deviceLocalID:(id)a7 occurrenceID:(id)a8 containedDeviceLocalID:(id)a9 syncID:(id)a10 playbackID:(id)a11 formerIDs:(id)a12 modelObjectType:(long long)a13 source:(long long)a14;
+ (id)identifierSetWithIdentifier:(id)a0 modelObjectType:(long long)a1 specificLibraryDatabaseID:(id)a2 isPossibleLibraryPersistentID:(BOOL)a3 source:(long long)a4;
+ (double)luminanceForColor:(struct CGColor { } *)a0;
+ (id)rawSourceFromSource:(long long)a0;
+ (long long)rawValueForAudioTraits:(long long)a0;
+ (id)recentlySearchedArchivedDataForUnderlyingIdentifierSet:(id)a0 modelObjectType:(long long)a1 error:(id *)a2;
+ (id)storeArtworkTokenWithImageArtworkInfo:(id)a0 cropStyle:(id)a1;

@end
