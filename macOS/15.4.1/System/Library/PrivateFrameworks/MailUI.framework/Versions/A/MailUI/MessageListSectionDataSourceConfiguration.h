@class NSString, MFSearchProgressView, MUIBrandIndicatorProvider, MessageListViewControllerState, EMObjectID, MUIMessageListCollectionView, EMCachingContactStore, EFPromise, MUIAvatarImageGenerator, MessageListCellLayoutValuesHelper, EMMessageList;
@protocol MessageListSectionDataSourceDelegate, MessageListSectionDataSourceSelectionModelProvider;

@interface MessageListSectionDataSourceConfiguration : NSObject

@property (readonly, nonatomic) EMObjectID *identifier;
@property (readonly, nonatomic) NSString *section;
@property (readonly, nonatomic) MUIMessageListCollectionView *collectionView;
@property (readonly, nonatomic) EMMessageList *messageList;
@property (readonly, nonatomic) EFPromise *initialLoadCompletedPromise;
@property (readonly, nonatomic) MessageListCellLayoutValuesHelper *layoutValuesHelper;
@property (readonly, nonatomic) MessageListViewControllerState *state;
@property (readonly, weak, nonatomic) id<MessageListSectionDataSourceDelegate> delegate;
@property (readonly, weak, nonatomic) id<MessageListSectionDataSourceSelectionModelProvider> selectionModelProvider;
@property (retain, nonatomic) MFSearchProgressView *searchProgressView;
@property (readonly, nonatomic) unsigned long long headerType;
@property (retain, nonatomic) MUIBrandIndicatorProvider *brandIndicatorProvider;
@property (retain, nonatomic) MUIAvatarImageGenerator *avatarGenerator;
@property (readonly, nonatomic) EMCachingContactStore *contactStore;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 section:(id)a1 collectionView:(id)a2 messageList:(id)a3 layoutValuesHelper:(id)a4 state:(id)a5 delegate:(id)a6 selectionModelProvider:(id)a7 initialLoadCompletedPromise:(id)a8 searchProgressView:(id)a9 headerType:(unsigned long long)a10 brandIndicatorProvider:(id)a11 avatarGenerator:(id)a12 contactStore:(id)a13;

@end
