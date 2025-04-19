@class MusicKit_SoftLinking_MPSectionedCollection, NSString, MusicKit_SoftLinking_MPModelObject, NSArray, MPModelLibraryPlaylistEditController, NSNumber;

@interface MusicKit_SoftLinking_MPModelLibraryPlaylistEditController : NSObject {
    MPModelLibraryPlaylistEditController *_underlyingEditController;
}

@property (class, readonly, nonatomic) NSString *playlistDidChangeNotificationName;

@property (readonly, nonatomic) id underlyingEditController;
@property (nonatomic) BOOL addInsertedTracksToLibrary;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *parentPlaylist;
@property (nonatomic) struct CGImage { } *userImage;
@property (retain, nonatomic) NSString *coverArtworkRecipe;
@property (retain, nonatomic, getter=isPublicPlaylist) NSNumber *publicPlaylist;
@property (retain, nonatomic, getter=isVisiblePlaylist) NSNumber *visiblePlaylist;
@property (retain, nonatomic, getter=isCuratorPlaylist) NSNumber *curatorPlaylist;
@property (copy, nonatomic) NSString *editSessionID;
@property (readonly, nonatomic, getter=isUndoAvailable) BOOL undoAvailable;
@property (readonly, nonatomic, getter=isRedoAvailable) BOOL redoAvailable;
@property (nonatomic) unsigned long long maxUndoLimit;
@property (readonly, copy, nonatomic) MusicKit_SoftLinking_MPSectionedCollection *currentTrackList;
@property (readonly, copy, nonatomic) NSArray *initialTrackList;

- (void)dealloc;
- (void).cxx_destruct;
- (id)setPlaylistName:(id)a0;
- (void)removeEntry:(id)a0;
- (void)appendObjects:(id)a0 completion:(id /* block */)a1;
- (void)applyChanges:(id)a0 completion:(id /* block */)a1;
- (void)beginEditingWithCompletion:(id /* block */)a0;
- (void)commitWithCompletion:(id /* block */)a0;
- (void)insertObjects:(id)a0 afterEntry:(id)a1 completion:(id /* block */)a2;
- (void)moveEntry:(id)a0 afterEntry:(id)a1;
- (id)movePlaylistEntry:(id)a0 afterEntry:(id)a1;
- (void)redoNextTransactionWithCompletion:(id /* block */)a0;
- (id)removeAllPlaylistEntries;
- (void)removeEntries:(id)a0;
- (id)removePlaylistEntries:(id)a0;
- (void)setInitialTrackList:(id)a0;
- (id)transactionsSinceIdentifier:(id)a0;
- (void)undoPreviousTransactionWithCompletion:(id /* block */)a0;
- (void)_handlePlaylistDidChangeNotification:(id)a0;
- (void)appendModelObject:(id)a0 completion:(id /* block */)a1;
- (void)appendModelObjects:(id)a0 completion:(id /* block */)a1;
- (id)initWithInitialItemList:(id)a0 library:(id)a1 authorProfile:(id)a2;
- (id)initWithPlaylist:(id)a0 initialTracklist:(id)a1 authorProfile:(id)a2 library:(id)a3;
- (id)initWithPlaylist:(id)a0 underlyingSectionedCollection:(id)a1 authorProfile:(id)a2 library:(id)a3;
- (void)insertModelObject:(id)a0 afterEntry:(id)a1 completion:(id /* block */)a2;
- (void)insertModelObjects:(id)a0 afterEntry:(id)a1 completion:(id /* block */)a2;

@end
