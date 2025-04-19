@class NSString, NSImage;

@interface _ASAccountSharingGroupInvitationContent : NSObject

@property (class, readonly, copy, nonatomic) NSString *knownSenderHeaderImageName;
@property (class, readonly, copy, nonatomic) NSImage *knownSenderHeaderImage;
@property (class, readonly, copy, nonatomic) NSString *unknownSenderHeaderTitle;
@property (class, readonly, copy, nonatomic) NSString *unknownSenderHeaderSubtitle;
@property (class, readonly, copy, nonatomic) NSImage *unknownSenderHeaderImage;
@property (class, readonly, copy, nonatomic) NSString *unknownSenderCellTitle;
@property (class, readonly, copy, nonatomic) NSString *unknownSenderImageName;
@property (class, readonly, copy, nonatomic) NSImage *unknownSenderCellImage;
@property (class, readonly, copy, nonatomic) NSString *acceptButtonTitle;
@property (class, readonly, copy, nonatomic) NSString *cancelButtonTitle;
@property (class, readonly, copy, nonatomic) NSString *declineButtonTitle;
@property (class, readonly, copy, nonatomic) NSString *viewButtonTitle;
@property (class, readonly, copy, nonatomic) NSImage *linkPresentationBubbleIcon;
@property (class, readonly, copy, nonatomic) NSString *linkPresentationBubbleTitle;

+ (id)_headerImageWithSymbolNamed:(id)a0;
+ (id)groupMemberListFooterTextForPermissionLevel:(long long)a0;
+ (id)invitationDescriptionForOwner:(id)a0;
+ (id)knownSenderHeaderSubtitleForPermissionLevel:(long long)a0;
+ (id)knownSenderHeaderTitleWithGroupName:(id)a0;
+ (id)linkPresentationBubbleSubtitleForGroupName:(id)a0 groupOwnerName:(id)a1;

@end
