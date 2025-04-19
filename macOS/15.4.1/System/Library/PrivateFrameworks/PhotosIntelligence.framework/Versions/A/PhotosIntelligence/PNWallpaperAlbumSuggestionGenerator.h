@interface PNWallpaperAlbumSuggestionGenerator : NSObject {
    void /* unknown type, empty encoding */ assetCollection;
    void /* unknown type, empty encoding */ albumLocalIdentifier;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ suggestionSubtype;
    void /* unknown type, empty encoding */ suggestionContext;
}

+ (id)cloudIdentifierForShuffleUserAlbumWithAssetCollection:(id)a0 photoLibrary:(id)a1;
+ (id)shuffleUserAlbumForCloudIdentifier:(id)a0 photoLibrary:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)assetsForDate:(id)a0 numberOfAssets:(long long)a1;
- (id)initWithAssetCollection:(id)a0 photoLibrary:(id)a1;
- (id)updateSuggestionsForDate:(id)a0 numberOfSuggestions:(long long)a1;

@end
