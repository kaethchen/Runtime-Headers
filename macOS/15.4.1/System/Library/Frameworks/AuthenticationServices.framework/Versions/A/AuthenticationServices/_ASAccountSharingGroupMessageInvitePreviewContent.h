@class NSString, NSImage;

@interface _ASAccountSharingGroupMessageInvitePreviewContent : NSObject

@property (class, readonly, copy, nonatomic) NSString *headerImageName;
@property (class, readonly, copy, nonatomic) NSImage *headerImage;
@property (class, readonly, copy, nonatomic) NSString *sendMessageButtonTitle;
@property (class, readonly, copy, nonatomic) NSString *notNowButtonTitle;
@property (class, readonly, copy, nonatomic) NSString *cancelButtonTitle;

+ (id)_genericHeaderSubtitle;
+ (id)headerSubtitleForInvitedGroupMemberData:(id)a0;
+ (id)headerTitleForInvitedGroupMemberData:(id)a0;

@end
