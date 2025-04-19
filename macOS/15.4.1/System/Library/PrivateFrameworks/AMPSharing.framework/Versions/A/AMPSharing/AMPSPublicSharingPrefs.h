@class AMPLSharingClient, NSString, NSArray;

@interface AMPSPublicSharingPrefs : NSObject

@property (retain, nonatomic) AMPLSharingClient *client;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic, getter=isPasswordProtected) BOOL passwordProtected;
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic, getter=areAllPlaylistsShared) BOOL shareAllPlaylists;
@property (readonly, nonatomic) NSArray *playlists;

- (void).cxx_destruct;
- (id)initWithClient:(id)a0;
- (void)setShareAllPlaylists:(BOOL)a0 withUpdatedPlaylists:(id)a1 withReply:(id /* block */)a2;
- (void)getConnectedClientCountWithReply:(id /* block */)a0;
- (void)setEnabled:(BOOL)a0 withReply:(id /* block */)a1;
- (void)setPasswordProtectionEnabled:(BOOL)a0 withPassword:(id)a1 withReply:(id /* block */)a2;
- (void)updatePlaylists:(id)a0;
- (void)updatePrefs:(BOOL)a0 withPasswordProtection:(BOOL)a1 withPassword:(id)a2 withShareAllPlaylists:(BOOL)a3 withPlaylists:(id)a4;

@end
