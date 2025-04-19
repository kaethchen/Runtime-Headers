@class NSString;

@interface PXSharedAlbumNavigationAttributes : NSObject

@property (readonly, nonatomic) NSString *invitationAlbumUUID;
@property (readonly, nonatomic) NSString *revealAssetUUID;
@property (readonly, nonatomic) NSString *commentGUID;

+ (id)attributesForURLComponents:(id)a0;

- (void).cxx_destruct;

@end
