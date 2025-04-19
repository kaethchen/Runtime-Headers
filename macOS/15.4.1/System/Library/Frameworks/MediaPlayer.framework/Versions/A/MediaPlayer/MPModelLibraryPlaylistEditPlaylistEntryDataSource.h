@class NSArray;

@interface MPModelLibraryPlaylistEditPlaylistEntryDataSource : MPModelLibraryPlaylistEditDataSource {
    NSArray *_playlistEntries;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithPlaylistEntries:(id)a0;
- (void)loadEntriesWithCompletion:(id /* block */)a0;

@end
