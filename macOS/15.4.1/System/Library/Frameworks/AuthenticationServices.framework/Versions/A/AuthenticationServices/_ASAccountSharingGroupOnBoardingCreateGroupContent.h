@class NSString, NSImage;

@interface _ASAccountSharingGroupOnBoardingCreateGroupContent : NSObject

@property (class, readonly, copy, nonatomic) NSString *headerImageName;
@property (class, readonly, copy, nonatomic) NSImage *headerImage;
@property (class, readonly, copy, nonatomic) NSString *headerTitle;
@property (class, readonly, copy, nonatomic) NSString *firstBulletImageName;
@property (class, readonly, copy, nonatomic) NSImage *firstBulletImage;
@property (class, readonly, copy, nonatomic) NSString *firstBulletTitle;
@property (class, readonly, copy, nonatomic) NSString *firstBulletDescription;
@property (class, readonly, copy, nonatomic) NSString *secondBulletImageName;
@property (class, readonly, copy, nonatomic) NSImage *secondBulletImage;
@property (class, readonly, copy, nonatomic) NSString *secondBulletTitle;
@property (class, readonly, copy, nonatomic) NSString *secondBulletDescription;
@property (class, readonly, copy, nonatomic) NSString *thirdBulletImageName;
@property (class, readonly, copy, nonatomic) NSImage *thirdBulletImage;
@property (class, readonly, copy, nonatomic) NSString *thirdBulletTitle;
@property (class, readonly, copy, nonatomic) NSString *thirdBulletDescription;

+ (id)_bulletListItemImageConfiguration;

@end
