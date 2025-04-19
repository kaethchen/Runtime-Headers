@class NSString, NSImage;

@interface _ASAccountSharingGroupOnBoardingInvitationAcceptanceFlowContent : NSObject

@property (class, readonly, copy, nonatomic) NSString *headerImageNameForWelcomeView;
@property (class, readonly, copy, nonatomic) NSImage *headerImageForWelcomeView;
@property (class, readonly, copy, nonatomic) NSString *firstBulletImageNameForWelcomeView;
@property (class, readonly, copy, nonatomic) NSImage *firstBulletImageForWelcomeView;
@property (class, readonly, copy, nonatomic) NSString *firstBulletTitleForWelcomeView;
@property (class, readonly, copy, nonatomic) NSString *firstBulletDescriptionForWelcomeView;
@property (class, readonly, copy, nonatomic) NSString *secondBulletImageNameForWelcomeView;
@property (class, readonly, copy, nonatomic) NSImage *secondBulletImageForWelcomeView;
@property (class, readonly, copy, nonatomic) NSString *secondBulletTitleForWelcomeView;
@property (class, readonly, copy, nonatomic) NSString *secondBulletDescriptionForWelcomeView;
@property (class, readonly, copy, nonatomic) NSString *thirdBulletImageNameForWelcomeView;
@property (class, readonly, copy, nonatomic) NSImage *thirdBulletImageForWelcomeView;
@property (class, readonly, copy, nonatomic) NSString *thirdBulletTitleForWelcomeView;
@property (class, readonly, copy, nonatomic) NSString *thirdBulletDescriptionForWelcomeView;
@property (class, readonly, copy, nonatomic) NSString *headerTitleForMovingCredentialsToGroup;
@property (class, readonly, copy, nonatomic) NSString *headerImageNameForMovingCredentialsToGroup;
@property (class, readonly, copy, nonatomic) NSImage *headerImageForMovingCredentialsToGroup;
@property (class, readonly, copy, nonatomic) NSString *headerTitleForRemovingDuplicateCredentialsInGroup;
@property (class, readonly, copy, nonatomic) NSString *headerImageNameForRemovingDuplicateCredentialsInGroup;
@property (class, readonly, copy, nonatomic) NSImage *headerImageForRemovingDuplicateCredentialsInGroup;

+ (id)_bulletListItemImageConfiguration;
+ (id)_headerImageForString:(id)a0;
+ (id)descriptionForMovingCredentialsToGroup:(id)a0;
+ (id)descriptionForRemovingDuplicateCredentialsInGroup:(id)a0;
+ (id)headerSubtitleForRemovingDuplicateCredentialsInGroup:(id)a0;
+ (id)headerTitleForWelcomeViewWithGroupName:(id)a0;

@end
