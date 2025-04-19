@class NSMutableArray, NSMutableDictionary;

@interface PODContentChangeSetBuilder : NSObject

@property (copy, nonatomic) id /* block */ episodeSource;
@property (copy, nonatomic) id /* block */ playlistSource;
@property (copy, nonatomic) id /* block */ showSource;
@property (copy, nonatomic) id /* block */ showArtworkSource;
@property (retain, nonatomic) NSMutableArray *orderedChangeSyncIDs;
@property (retain, nonatomic) NSMutableDictionary *changeBySyncID;
@property (retain, nonatomic) NSMutableDictionary *artworkChangesByShowSyncID;
@property (retain, nonatomic) NSMutableDictionary *episodesBySyncID;
@property (retain, nonatomic) NSMutableDictionary *playlistsBySyncID;
@property (retain, nonatomic) NSMutableDictionary *showsBySyncID;
@property (retain, nonatomic) NSMutableDictionary *showArtworksBySyncID;

+ (id)changeSetWithAnchor:(id)a0 changes:(id)a1;
+ (id)emptyChangeSetWithAnchor:(id)a0;

- (void).cxx_destruct;
- (id)_showForSyncID:(long long)a0;
- (id)accumulatedChangeSetWithAnchor:(id)a0;
- (id)_episodeForSyncID:(long long)a0 assumeExists:(BOOL)a1;
- (void)_addDeleteChange:(id)a0 syncID:(long long)a1;
- (void)_addInsertOrUpdateEpisodeSyncID:(long long)a0 isInsert:(BOOL)a1 playMetadata:(id)a2;
- (void)_addInsertOrUpdatePlaylistSyncID:(long long)a0 isInsert:(BOOL)a1;
- (void)_addInsertOrUpdateShowSyncID:(long long)a0 isInsert:(BOOL)a1;
- (id)_artworkForSyncID:(long long)a0 cache:(id)a1 artworkLoader:(id /* block */)a2;
- (id)_entityForSyncID:(long long)a0 cache:(id)a1 entityLoader:(id /* block */)a2 assumeExists:(BOOL)a3;
- (id)_episodesForSyncIDs:(id)a0;
- (BOOL)_hasExistingDeleteForSyncID:(long long)a0;
- (BOOL)_hasExistingInsertForSyncID:(long long)a0;
- (BOOL)_hasExistingInsertOrDeleteForSyncID:(long long)a0;
- (BOOL)_hasExistingInsertWithArtworkForShowID:(long long)a0;
- (id)_playlistForSyncID:(long long)a0;
- (void)_removeChangeForSyncID:(long long)a0;
- (void)_setChange:(id)a0 forSyncID:(long long)a1;
- (id)_showArtworkForSyncID:(long long)a0;
- (void)_updateCachedEpisodeWithPlayMetadata:(id)a0;
- (void)addArtworkUpdateForShowSyncID:(long long)a0;
- (void)addChangeForEpisodeSyncID:(long long)a0 changeType:(long long)a1;
- (void)addChangeForPlaylistSyncID:(long long)a0 changeType:(long long)a1;
- (void)addChangeForShowSyncID:(long long)a0 changeType:(long long)a1;
- (void)addPlayMetadataUpdateForEpisodeSyncID:(long long)a0 playMetadata:(id)a1;
- (id)initWithEpisodeSource:(id /* block */)a0 playlistSource:(id /* block */)a1 showSource:(id /* block */)a2 showArtworkSource:(id /* block */)a3;

@end
