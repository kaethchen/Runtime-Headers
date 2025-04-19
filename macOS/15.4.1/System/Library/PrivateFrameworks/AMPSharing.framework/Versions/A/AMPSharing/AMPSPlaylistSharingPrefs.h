@class AMPLSharingClient, NSString;

@interface AMPSPlaylistSharingPrefs : NSObject <NSCopying>

@property (retain, nonatomic) AMPLSharingClient *client;
@property (nonatomic, getter=isShared) BOOL shared;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long ID;
@property (readonly, nonatomic) unsigned long long mediaDomain;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0 withClient:(id)a1;
- (void)setPlaylistIsShared:(BOOL)a0 withReply:(id /* block */)a1;
- (void)updateWithPrefsDict:(id)a0;

@end
