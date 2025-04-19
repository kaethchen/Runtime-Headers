@class NSString, NSArray, NSURL, _UNNotificationContact;

@interface _UNNotificationCommunicationContext : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *associatedObjectUri;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) _UNNotificationContact *sender;
@property (readonly, copy) NSArray *recipients;
@property (readonly, copy) NSURL *contentURL;
@property (readonly, copy) NSString *imageName;
@property (readonly, getter=isSystemImage) BOOL systemImage;
@property (readonly) BOOL mentionsCurrentUser;
@property (readonly) BOOL notifyRecipientAnyway;
@property (readonly, getter=isReplyToCurrentUser) BOOL replyToCurrentUser;
@property (readonly) unsigned long long recipientCount;
@property (readonly, getter=isGroup) BOOL group;
@property (readonly, getter=isDirect) BOOL direct;
@property (readonly) long long capabilities;
@property (readonly, getter=isBusinessCorrespondence) BOOL businessCorrespondence;
@property (readonly, copy) NSArray *allContacts;
@property (readonly, copy) NSString *preferredSenderSummary;
@property (readonly, copy) NSString *preferredRecipientsSummary;
@property (readonly, copy) NSString *preferredDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)_effectiveAllContactsCount;
- (unsigned long long)_effectiveRecipientCount;
- (id)_initWithIdentifier:(id)a0 associatedObjectUri:(id)a1 bundleIdentifier:(id)a2 displayName:(id)a3 sender:(id)a4 recipients:(id)a5 contentURL:(id)a6 imageName:(id)a7 systemImage:(BOOL)a8 mentionsCurrentUser:(BOOL)a9 notifyRecipientAnyway:(BOOL)a10 replyToCurrentUser:(BOOL)a11 recipientCount:(unsigned long long)a12 capabilities:(long long)a13 businessCorrespondence:(BOOL)a14;
- (id)_summaryFromContacts:(id)a0 effectiveCount:(unsigned long long)a1 includeMe:(BOOL)a2;
- (BOOL)isAvatarImagePossible;
- (BOOL)isAvatarImagePossibleForBundleIdentifier:(id)a0;

@end
