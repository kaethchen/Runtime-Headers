@class MUIAvatarImageGenerator;
@protocol EFCancelable;

@interface MUIMessageListGroupedSenderSectionDataSource : MessageListSectionDataSource

@property (retain, nonatomic) MUIAvatarImageGenerator *avatarGenerator;
@property (retain, nonatomic) id<EFCancelable> avatarUserDefaultObserver;
@property (nonatomic) BOOL hideMessageListAvatar;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)sectionForCollection:(id)a0;
- (id)configuredCollectionViewCellForCollectionView:(id)a0 indexPath:(id)a1 itemID:(id)a2 cellIdentifier:(id)a3;

@end
