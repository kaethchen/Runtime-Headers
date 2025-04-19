@class MPMediaQuery, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <NSCopying> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_properties;
    MPMediaQuery *_itemsQuery;
    void *_clusterPlaylist;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeAllItems;
- (id)items;
- (id)valueForProperty:(id)a0;
- (unsigned long long)mediaTypes;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (id)mediaLibrary;
- (BOOL)existsInLibrary;
- (void)endGeneratingGeniusClusterItems;
- (void)removeFirstItem;
- (BOOL)_allowsEditing;
- (void)_enumerateItemPersistentIDsUsingBlock:(id /* block */)a0;
- (id)_tokenBinaryIdentifierAsString;
- (void)_updateLibraryForPlaylistEdit:(id)a0;
- (void)addItemWithProductID:(id)a0 completionHandler:(id /* block */)a1;
- (void)addMediaItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)appendItem:(id)a0 completion:(id /* block */)a1;
- (void)appendItems:(id)a0 andEntryProperties:(id)a1 completion:(id /* block */)a2;
- (void)appendItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)a0 error:(id *)a1;
- (id)geniusClusterItemsWithCount:(unsigned long long)a0 error:(id *)a1;
- (id)initWithProperties:(id)a0 itemsQuery:(id)a1;
- (id)itemsQuery;
- (void)moveItemFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1 completionBlock:(id /* block */)a2;
- (id)multiverseIdentifier;
- (void)populateWithSeedItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)populateWithSeedItem:(id)a0 queue:(id)a1 completionBlock:(id /* block */)a2;
- (void)removeItems:(id)a0 atFilteredIndexes:(id)a1 completionBlock:(id /* block */)a2;
- (void)replaceItems:(id)a0 completion:(id /* block */)a1;
- (void)replaceItemsWithPersistentIDs:(id)a0 andEntryProperties:(id)a1 completion:(id /* block */)a2;
- (void)replaceItemsWithPersistentIDs:(id)a0 completion:(id /* block */)a1;
- (id)representativeItem;
- (void)setReactionText:(id)a0 onEntryAtPosition:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)setValue:(id)a0 forProperty:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)setValuesForProperties:(id)a0 trackList:(id)a1 andEntryProperties:(id)a2 withCompletionBlock:(id /* block */)a3;
- (id)valuesForProperties:(id)a0;

@end
