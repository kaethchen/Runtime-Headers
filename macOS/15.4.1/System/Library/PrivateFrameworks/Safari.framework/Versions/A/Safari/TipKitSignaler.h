@interface TipKitSignaler : NSObject

+ (void)reportUserSearchedInTabOverview;
+ (void)reportUserAddedItemToReadingList;
+ (void)reportUserCreatedATabGroup;
+ (void)reportUserDidReopenWebPage;
+ (void)reportUserDidUndoCloseWebPage;
+ (void)reportUserHasMultipleTabs;
+ (void)reportUserHasOfflineReadingListItems;
+ (void)reportUserHasPinnedTabs;
+ (void)reportUserHasReadingListItems;
+ (void)reportUserHasTabGroups;
+ (void)reportUserInvokedReader;
+ (void)reportUserOpenedNewTab;
+ (void)reportUserPinnedATab;
+ (void)reportUserSavedReadingListItemForOffline;
+ (void)reportUserSwipedToNavigate;
+ (void)reportUserTranslatedAWebPage;

@end
