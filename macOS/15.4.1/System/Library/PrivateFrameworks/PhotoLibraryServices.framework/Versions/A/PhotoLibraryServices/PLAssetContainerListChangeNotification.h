@class NSDictionary, NSObject;
@protocol PLAlbumContainer, PLAssetContainerList;

@interface PLAssetContainerListChangeNotification : PLContainerChangeNotification {
    NSDictionary *_userInfo;
}

@property (readonly, nonatomic) id<PLAssetContainerList> assetContainerList;
@property (readonly, nonatomic) NSObject<PLAlbumContainer> *albumList;

+ (id)notificationWithContainerList:(id)a0 snapshot:(id)a1 changedContainers:(id)a2;

- (id)description;
- (id)name;
- (void).cxx_destruct;
- (id)userInfo;
- (id)_contentRelationshipName;

@end
