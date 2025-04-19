@class PODPlaylist, NSArray, NSString;

@interface PODPlaylistChangeEntityData : PODContentChangeEntityData <PODSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PODPlaylist *playlist;
@property (readonly, nonatomic) NSArray *episodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
