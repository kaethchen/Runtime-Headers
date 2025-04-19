@class NSDictionary, PLManagedAsset;

@interface PLCloudCommentsChangeNotification : PLContainerChangeNotification {
    NSDictionary *_userInfo;
}

@property (readonly, nonatomic) PLManagedAsset *asset;

+ (id)notificationWithAsset:(id)a0 snapshot:(id)a1;

- (id)description;
- (id)name;
- (void).cxx_destruct;
- (id)userInfo;
- (id)_contentRelationshipName;

@end
