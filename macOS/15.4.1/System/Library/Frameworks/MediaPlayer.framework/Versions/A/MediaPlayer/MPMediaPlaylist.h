@class NSString, NSArray, MPMediaQuery;

@interface MPMediaPlaylist : MPMediaItemCollection {
    NSArray *_representativeArtists;
    MPMediaQuery *_seedTracksQuery;
}

@property (readonly, nonatomic) unsigned long long persistentID;
@property (readonly, nonatomic) NSString *cloudGlobalID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long playlistAttributes;
@property (readonly, nonatomic) NSArray *seedItems;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSString *authorDisplayName;

+ (BOOL)supportsSecureCoding;
+ (void)_createFilterableDictionary;
+ (BOOL)_isValidPlaylistProperty:(id)a0;
+ (BOOL)canFilterByProperty:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)items;
- (id)valueForProperty:(id)a0;
- (unsigned long long)mediaTypes;
- (BOOL)existsInLibrary;
- (void)removeFirstItem;
- (id)seedTracksQuery;
- (void)addItemWithProductID:(id)a0 completionHandler:(id /* block */)a1;
- (void)addMediaItems:(id)a0 completionHandler:(id /* block */)a1;
- (id)artworkCatalog;
- (id)artworkCatalogsWithMaximumCount:(unsigned long long)a0;
- (id)initWithMultiverseIdentifier:(id)a0 library:(id)a1;
- (id)initWithPersistentID:(unsigned long long)a0;
- (id)initWithPersistentID:(unsigned long long)a0 mediaLibrary:(id)a1;
- (BOOL)isCloudMix;
- (BOOL)isFavoriteSongsPlaylist;
- (id)multiverseIdentifier;
- (void)removeArtworkWithSourceType:(long long)a0;
- (id)representativeArtists;
- (id)representativeItem;
- (id)tiledArtworkCatalogWithRows:(unsigned long long)a0 columns:(unsigned long long)a1;

@end
