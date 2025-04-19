@class NSString;

@interface AMPLFrameworkClient : AMPLClient <AMPLClientProtocol>

@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSString *libraryFilePath;

- (void).cxx_destruct;
- (void)performLibraryRequest:(id)a0 withReply:(id /* block */)a1;
- (void)performLibrarySearchRequest:(id)a0 withReply:(id /* block */)a1;
- (void)performSynchronousLibraryRequest:(id)a0 withReply:(id /* block */)a1;
- (void)storageInfoForDomains:(unsigned long long)a0 withMediaKinds:(unsigned long long)a1 ignorePurgeable:(BOOL)a2 withReply:(id /* block */)a3;
- (void)albumsForDomains:(unsigned long long)a0 withMediaKinds:(unsigned long long)a1 withDeviceCapabilities:(unsigned long long)a2 withReply:(id /* block */)a3;
- (void)artistsForDomains:(unsigned long long)a0 withMediaKinds:(unsigned long long)a1 withDeviceCapabilities:(unsigned long long)a2 withReply:(id /* block */)a3;
- (void)genresForDomains:(unsigned long long)a0 withMediaKinds:(unsigned long long)a1 withDeviceCapabilities:(unsigned long long)a2 withReply:(id /* block */)a3;
- (BOOL)handleReconnectionToLibrary:(id)a0;
- (BOOL)handleRegisterClientName:(id)a0 withConnection:(id)a1 error:(id *)a2;
- (BOOL)handleSynchronousOpenMediaDomains:(id)a0 error:(id *)a1 withResponseDict:(id *)a2;
- (id)initWithClientInfo:(id)a0 withDeviceId:(id)a1;
- (id)initWithClientInfo:(id)a0 withFilePath:(id)a1 withMediaDomains:(unsigned long long)a2;
- (id)initWithClientInfo:(id)a0 withMediaDomains:(unsigned long long)a1 error:(id *)a2;
- (void)mediaItemsForDomains:(unsigned long long)a0 withMediaKinds:(unsigned long long)a1 withDeviceCapabilities:(unsigned long long)a2 withReply:(id /* block */)a3;
- (void)playlistsForDomains:(unsigned long long)a0 withMediaKinds:(unsigned long long)a1 withDeviceCapabilities:(unsigned long long)a2 withItems:(BOOL)a3 withReply:(id /* block */)a4;
- (id)registrationNameForClientName:(id)a0;
- (void)removeDownloadForTracks:(id)a0 withReply:(id /* block */)a1;
- (void)synchronousAlbumsForDomains:(unsigned long long)a0 withMediaKinds:(unsigned long long)a1 withDeviceCapabilities:(unsigned long long)a2 withReply:(id /* block */)a3;
- (void)synchronousAppHasMigrated:(id)a0 withReply:(id /* block */)a1;
- (void)synchronousArtistsForDomains:(unsigned long long)a0 withMediaKinds:(unsigned long long)a1 withDeviceCapabilities:(unsigned long long)a2 withReply:(id /* block */)a3;
- (void)synchronousArtworkForMediaFile2:(id)a0 withReply:(id /* block */)a1;
- (void)synchronousArtworkForMediaFile:(id)a0 withReply:(id /* block */)a1;
- (void)synchronousDistinguishedPlaylistForDomains:(unsigned long long)a0 withDistinguishedKind:(unsigned long long)a1 withItems:(BOOL)a2 withReply:(id /* block */)a3;
- (void)synchronousGenresForDomains:(unsigned long long)a0 withMediaKinds:(unsigned long long)a1 withDeviceCapabilities:(unsigned long long)a2 withReply:(id /* block */)a3;
- (void)synchronousMediaItemsForDomains:(unsigned long long)a0 withMediaKinds:(unsigned long long)a1 withDeviceCapabilities:(unsigned long long)a2 withReply:(id /* block */)a3;
- (void)synchronousMediaItemsWithPersistentIDs:(id)a0 forDomains:(unsigned long long)a1 withMediaKinds:(unsigned long long)a2 withDeviceCapabilities:(unsigned long long)a3 withReply:(id /* block */)a4;
- (void)synchronousMigratedMediaFolderBookmarkWithReply:(id /* block */)a0;
- (void)synchronousMigratedPodcastFeedsWithReply:(id /* block */)a0;
- (void)synchronousMigratedPodcastSettingsWithReply:(id /* block */)a0;
- (void)synchronousMigratedPodcastStationsWithReply:(id /* block */)a0;
- (BOOL)synchronousOpenMediaDomains:(id *)a0;
- (BOOL)synchronousOpenMediaDomains:(id *)a0 withResponseDict:(id *)a1;
- (void)synchronousParentalPreferencesWithReply:(id /* block */)a0;
- (void)synchronousPlaylistsForDomains:(unsigned long long)a0 withMediaKinds:(unsigned long long)a1 withDeviceCapabilities:(unsigned long long)a2 withItems:(BOOL)a3 withReply:(id /* block */)a4;
- (void)synchronousReadWriteURLForMediaItem:(id)a0 withReply:(id /* block */)a1;
- (void)synchronousRemoveDownloadForTracks:(id)a0 withReply:(id /* block */)a1;
- (void)synchronousStorageInfoForDomains:(unsigned long long)a0 withMediaKinds:(unsigned long long)a1 ignorePurgeable:(BOOL)a2 withReply:(id /* block */)a3;
- (void)synchronousTracksForPlaylist:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)tracksForPlaylist:(unsigned long long)a0 withReply:(id /* block */)a1;

@end
