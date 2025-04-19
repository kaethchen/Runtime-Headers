@class MPCPlayerPath, NSString, MPCMRRemoteArtworkDataSource, MSVLRUDictionary, NSMutableDictionary, MPCFuture, NSObject, NSMutableArray, MPCMRArtworkDataSource, NSMapTable, NSDictionary;
@protocol OS_dispatch_queue;

@interface MPCMediaRemoteController : NSObject <MSVLRUDictionaryDelegate, MPMediaRemoteEntityArtworkGenerator> {
    BOOL _invalidated;
    MPCFuture *_playbackStateFuture;
    MPCFuture *_supportedCommandsFuture;
    MPCFuture *_playbackQueueParticipantsFuture;
    struct _MSVSignedRange { long long location; long long length; } _loadedContentItemsRange;
    struct _MSVSignedRange { long long location; long long length; } _requestedContentItemsRange;
    NSMutableArray *_contentItemIDs;
    MSVLRUDictionary *_contentItems;
    NSMutableDictionary *_optimisticStateContentItems;
    NSMutableDictionary *_contentItemChanges;
    MSVLRUDictionary *_contentItemArtwork;
    NSMutableDictionary *_contentItemArtworkIdentifiers;
    NSMapTable *_playbackQueueFutures;
    NSMapTable *_contentItemFutures;
    NSMutableDictionary *_contentItemArtworkFutures;
    NSMutableDictionary *_contentItemRemoteArtworkFutures;
    NSMutableDictionary *_requestedRangeForProperties;
    NSMutableDictionary *_contentItemIDsForProperties;
    unsigned long long _stateHandle;
    MPCMRArtworkDataSource *_mrArtworkDataSource;
    MPCMRRemoteArtworkDataSource *_mrRemoteArtworkDataSource;
    NSString *_playingItemIdentifier;
    NSString *_queueIdentifier;
    NSDictionary *_queueProperties;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *mediaRemoteReplyQueue;

@property (retain, nonatomic) MPCPlayerPath *resolvedPlayerPath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) id invalidationToken;
@property (readonly, nonatomic) long long playbackStateCacheState;
@property (readonly, nonatomic) MPCFuture *playbackState;
@property (readonly, nonatomic) long long supportedCommandsCacheState;
@property (readonly, nonatomic) MPCFuture *supportedCommands;
@property (readonly, nonatomic) long long playbackQueueParticipantsCacheState;
@property (readonly, nonatomic) MPCFuture *playbackQueueParticipants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldRegisterForNotifications;
+ (void)_sendCommand:(unsigned int)a0 options:(id)a1 appOptions:(unsigned int)a2 toPlayerPath:(id)a3 completion:(id /* block */)a4;
+ (void)_sendCommand:(unsigned int)a0 playbackIntent:(id)a1 options:(id)a2 toPlayerPath:(id)a3 completion:(id /* block */)a4;
+ (id)controllerForPlayerPath:(id)a0;
+ (void)sendCommand:(unsigned int)a0 options:(id)a1 toPlayerPath:(id)a2 completion:(id /* block */)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_init;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)contentItemForIdentifier:(id)a0;
- (void)dictionary:(id)a0 willRemoveObject:(id)a1 forKey:(id)a2;
- (id)_onQueue_stateDictionary;
- (id /* block */)artworkCatalogBlockForContentItem:(id)a0;
- (id)_legacyCommands;
- (id)_onQueue_playbackQueueForRange:(struct _MSVSignedRange { long long x0; long long x1; })a0;
- (id /* block */)_artworkCatalogBlockForContentItem:(id)a0;
- (void)_contentItemArtworkChangedNotification:(id)a0;
- (id)_createExportableArtworkPropertiesForContentItem:(id)a0;
- (id)_onQueue_identifiersForRange:(struct _MSVSignedRange { long long x0; long long x1; })a0;
- (void)_onQueue_invalidateArtworkFuturesForContentItemID:(id)a0;
- (void)_onQueue_mergeContentItems:(id)a0;
- (void)_onQueue_mergeContentItems:(id)a0 queueRange:(struct _MSVSignedRange { long long x0; long long x1; })a1 requestRange:(struct _MSVSignedRange { long long x0; long long x1; })a2 requestProperties:(id)a3;
- (void)_onQueue_purgeArtworkForContentItemIdentifier:(id)a0;
- (void)_onQueue_purgeArtworkForContentItemIdentifier:(id)a0 artworkIdentifier:(id)a1;
- (void)_onQueue_purgeContentItemIdentifierForProperties:(id)a0;
- (id /* block */)_onQueue_setOptimisticElapsedTimeForContentItem:(id)a0 elapsedTime:(double)a1 rate:(float)a2;
- (id /* block */)_onQueue_setOptimisticPlaybackState:(unsigned int)a0 withOptions:(id)a1;
- (void)_onQueue_setOptimisticReorderedPlaybackQueueWithMovingContentItemIdentifier:(id)a0 afterContentItemIdentifier:(id)a1;
- (void)_onQueue_setOptimisticReorderedPlaybackQueueWithMovingContentItemIdentifier:(id)a0 beforeContentItemIdentifier:(id)a1;
- (id /* block */)_onQueue_updateOptimisticStateForCommand:(unsigned int)a0 options:(id)a1;
- (void)_playbackQueueChangedNotification:(id)a0;
- (void)_playbackQueueContentItemsChangedNotification:(id)a0;
- (void)_playbackQueueParticipantsDidChangeNotification:(id)a0;
- (void)_playbackStateDidChangeNotification:(id)a0;
- (id)_requestPropertiesDescriptionForRequest:(id)a0;
- (void)_supportedCommandsDidChangeNotification:(id)a0;
- (long long)contentItemArtworkCacheStateForArtworkIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)contentItemArtworkForContentItemIdentifier:(id)a0 artworkIdentifier:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (long long)contentItemCacheStateForIdentifier:(id)a0;
- (id)contentItemRemoteArtworkForContentItemIdentifier:(id)a0 artworkIdentifier:(id)a1 size:(struct CGSize { double x0; double x1; })a2 artworkFormat:(id)a3;
- (void)invalidateAllTokens;
- (id)mediaRemoteArtworkDataSource;
- (id)playbackQueueForRequest:(id)a0;
- (id)remoteArtworkDataSource;

@end
