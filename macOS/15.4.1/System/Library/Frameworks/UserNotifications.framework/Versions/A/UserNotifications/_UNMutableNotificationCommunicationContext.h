@class NSString, NSArray, NSURL, _UNNotificationContact;

@interface _UNMutableNotificationCommunicationContext : _UNNotificationCommunicationContext

@property (copy) NSString *identifier;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSString *associatedObjectUri;
@property (copy) NSString *displayName;
@property (copy) NSArray *recipients;
@property (copy) _UNNotificationContact *sender;
@property (copy) NSURL *contentURL;
@property (copy) NSString *imageName;
@property (getter=isSystemImage) BOOL systemImage;
@property BOOL mentionsCurrentUser;
@property BOOL notifyRecipientAnyway;
@property (getter=isReplyToCurrentUser) BOOL replyToCurrentUser;
@property unsigned long long recipientCount;
@property long long capabilities;
@property (getter=isBusinessCorrespondence) BOOL businessCorrespondence;

+ (id)mutableContextFromINIntent:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplayName:(id)a0;
- (void)setBundleIdentifier:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)setImageName:(id)a0;
- (void)setRecipients:(id)a0;
- (void)setContentURL:(id)a0;
- (void)setRecipientCount:(unsigned long long)a0;
- (void)setSender:(id)a0;
- (void)setCapabilities:(long long)a0;
- (void)setSystemImage:(BOOL)a0;
- (void)setAssociatedObjectUri:(id)a0;
- (void)setBusinessCorrespondence:(BOOL)a0;
- (void)setMentionsCurrentUser:(BOOL)a0;
- (void)setNotifyRecipientAnyway:(BOOL)a0;
- (void)setReplyToCurrentUser:(BOOL)a0;

@end
