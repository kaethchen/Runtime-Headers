@interface AMPLSharingClient : AMPLClient <AMPLClientProtocol>

- (id)fetchHomeSharingPrefsWithReply:(id /* block */)a0;
- (id)fetchMediaSharingInfoWithReply:(id /* block */)a0;
- (void)setSharedLibraryName:(id)a0 withReply:(id /* block */)a1;
- (void)disableHomeSharingWithReply:(id /* block */)a0;
- (void)disablePhotoSharingWithReply:(id /* block */)a0;
- (void)enableHomeSharing:(id)a0 forComputerID:(id)a1 forUserID:(unsigned long long)a2 forUserName:(id)a3 withReply:(id /* block */)a4;
- (void)enablePhotoSharingWithSourceID:(id)a0 settings:(id)a1 withReply:(id /* block */)a2;
- (id)fetchPhotoSharingPrefsWithReply:(id /* block */)a0;
- (void)fetchPublicSharingClientCount:(id /* block */)a0;
- (id)fetchPublicSharingPrefsWithReply:(id /* block */)a0;
- (BOOL)handleReconnectionToLibrary:(id)a0;
- (BOOL)handleRegisterSharingClientID:(unsigned int)a0 withConnection:(id)a1 error:(id *)a2;
- (BOOL)handleSynchronousOpenMediaDomains:(id)a0 error:(id *)a1;
- (id)initWithClientInfo:(id)a0 withClientID:(unsigned int)a1 error:(id *)a2;
- (id)newClientConnection:(int)a0 clientIPAddress:(id)a1;
- (void)setPlaylistIsShared:(BOOL)a0 forPlaylist:(unsigned long long)a1 withReply:(id /* block */)a2;
- (void)setPublicSharingState:(BOOL)a0 withReply:(id /* block */)a1;
- (void)setShareAllPlaylists:(BOOL)a0 withUpdatedPlaylists:(id)a1 withReply:(id /* block */)a2;
- (void)setSharedLibraryPassword:(BOOL)a0 withPassword:(id)a1 withReply:(id /* block */)a2;
- (BOOL)synchronousOpenMediaDomainsSharingConnections:(id *)a0;
- (void)updatePlayCounts:(BOOL)a0 withReply:(id /* block */)a1;

@end
