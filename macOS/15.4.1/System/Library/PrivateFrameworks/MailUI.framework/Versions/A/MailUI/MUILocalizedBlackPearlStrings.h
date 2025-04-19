@class NSString;

@interface MUILocalizedBlackPearlStrings : NSObject

@property (class, readonly, copy, nonatomic) NSString *categorizeMessagesTitle;
@property (class, readonly, copy, nonatomic) NSString *categorizeSenderMenuTitle;
@property (class, readonly, copy, nonatomic) NSString *categorizeToolbarTitle;
@property (class, readonly, copy, nonatomic) NSString *alwaysCategorizeAsMenuTitle;
@property (class, readonly, copy, nonatomic) NSString *automaticallyCategorizeAllMessages;
@property (class, readonly, copy, nonatomic) NSString *manuallyCategorizeHeaderTitle;
@property (class, readonly, copy, nonatomic) NSString *manuallyCategorizeFooterTitle;
@property (class, readonly, copy, nonatomic) NSString *dockCountPrimaryUnreadMessages;
@property (class, readonly, copy, nonatomic) NSString *notificationPrimaryInbox;
@property (class, readonly, copy, nonatomic) NSString *clearTimeSensitiveMenuTitle;

+ (id)allCurrentAndFutureMessagesAutomaticallyCategorizedForDisplayName:(id)a0;
+ (id)allCurrentAndFutureMessagesFromDisplayName:(id)a0 willBeCategorizedInBucket:(long long)a1;
+ (id)categorizeAllMessagesForDisplayName:(id)a0;
+ (id)resetUserOverrideForNumberOfOverrides:(long long)a0;
+ (id)timeSensitiveBannerSubtitleForCategoryType:(unsigned long long)a0;
+ (id)timeSensitiveTitleForCategoryType:(unsigned long long)a0;
+ (id)titleForManuallyCategorizingMessagesFromDisplayName:(id)a0 toBucket:(long long)a1;
+ (id)titleForRestoringAutomaticCategorizationForDisplayName:(id)a0;

@end
