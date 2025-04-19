@class NSDate, NSString, NSURL, NSAttributedString, NSSet, _UNNotificationCommunicationContext, NSArray, UNNotificationSound, NSDictionary, UNNotificationIcon, NSNumber;

@interface UNNotificationContent : NSObject <UNNotificationSecurityScopeProviding, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString *_subtitle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *markedMutableCopyMessage;
@property (readonly, copy) NSString *contentType;
@property (readonly, copy) _UNNotificationCommunicationContext *communicationContext;
@property (readonly, copy) NSString *header;
@property (readonly, copy) NSString *footer;
@property (readonly, copy) NSAttributedString *attributedBody;
@property (readonly) BOOL shouldIgnoreDoNotDisturb;
@property (readonly) BOOL shouldIgnoreDowntime;
@property (readonly) BOOL shouldSuppressScreenLightUp;
@property (readonly) BOOL shouldHideDate;
@property (readonly, copy) NSDate *date;
@property (readonly, copy) NSDate *expirationDate;
@property (readonly) BOOL shouldAuthenticateDefaultAction;
@property (readonly) BOOL shouldBackgroundDefaultAction;
@property (readonly) BOOL shouldPreventNotificationDismissalAfterDefaultAction;
@property (readonly) BOOL shouldSuppressDefaultAction;
@property (readonly, copy) NSURL *defaultActionURL;
@property (readonly, copy) NSString *defaultActionBundleIdentifier;
@property (readonly) BOOL shouldDisplayActionsInline;
@property (readonly, copy) UNNotificationIcon *icon;
@property (readonly) BOOL shouldShowSubordinateIcon;
@property (readonly, copy, nonatomic) NSSet *topicIdentifiers;
@property (readonly) unsigned long long realertCount;
@property (readonly) BOOL screenCaptureProhibited;
@property (readonly, copy) NSString *speechLanguage;
@property (readonly) BOOL shouldUseRequestIdentifierForDismissalSync;
@property (readonly) BOOL shouldSuppressSyncDismissalWhenRemoved;
@property (readonly) NSString *accessoryImageName;
@property (readonly, copy) NSArray *peopleIdentifiers;
@property (readonly) BOOL shouldPreemptPresentedNotification;
@property (readonly) BOOL shouldHideTime;
@property (readonly) BOOL hasDefaultAction;
@property (readonly, copy) NSString *defaultActionTitle;
@property (readonly, copy) NSArray *attachments;
@property (readonly, copy) NSNumber *badge;
@property (readonly, copy) NSString *body;
@property (readonly, copy) NSString *categoryIdentifier;
@property (readonly, copy) NSString *launchImageName;
@property (readonly, copy) UNNotificationSound *sound;
@property (readonly, copy) NSString *subtitle;
@property (readonly, copy) NSString *threadIdentifier;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly, copy) NSString *summaryArgument;
@property (readonly) unsigned long long summaryArgumentCount;
@property (readonly, copy) NSString *targetContentIdentifier;
@property (readonly) unsigned long long interruptionLevel;
@property (readonly) double relevanceScore;
@property (readonly, copy) NSString *filterCriteria;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionForDebug:(BOOL)a0;
- (id)_initWithContentType:(id)a0 communicationContext:(id)a1 accessoryImageName:(id)a2 attachments:(id)a3 badge:(id)a4 body:(id)a5 attributedBody:(id)a6 categoryIdentifier:(id)a7 date:(id)a8 icon:(id)a9 defaultActionTitle:(id)a10 defaultActionURL:(id)a11 defaultActionBundleIdentifier:(id)a12 expirationDate:(id)a13 header:(id)a14 footer:(id)a15 launchImageName:(id)a16 peopleIdentifiers:(id)a17 shouldHideDate:(BOOL)a18 shouldHideTime:(BOOL)a19 shouldIgnoreDoNotDisturb:(BOOL)a20 shouldIgnoreDowntime:(BOOL)a21 shouldSuppressScreenLightUp:(BOOL)a22 shouldAuthenticateDefaultAction:(BOOL)a23 shouldBackgroundDefaultAction:(BOOL)a24 shouldPreventNotificationDismissalAfterDefaultAction:(BOOL)a25 shouldShowSubordinateIcon:(BOOL)a26 shouldSuppressDefaultAction:(BOOL)a27 shouldSuppressSyncDismissalWhenRemoved:(BOOL)a28 shouldUseRequestIdentifierForDismissalSync:(BOOL)a29 shouldPreemptPresentedNotification:(BOOL)a30 shouldDisplayActionsInline:(BOOL)a31 sound:(id)a32 subtitle:(id)a33 threadIdentifier:(id)a34 title:(id)a35 topicIdentifiers:(id)a36 realertCount:(unsigned long long)a37 summaryArgument:(id)a38 summaryArgumentCount:(unsigned long long)a39 targetContentIdentifier:(id)a40 interruptionLevel:(unsigned long long)a41 relevanceScore:(double)a42 filterCriteria:(id)a43 screenCaptureProhibited:(BOOL)a44 speechLanguage:(id)a45 userInfo:(id)a46;
- (id)_safeAttributedStringForAttributedString:(id)a0 debug:(BOOL)a1;
- (id)_safeStringForString:(id)a0 debug:(BOOL)a1;
- (void)addSecurityScope:(id)a0;
- (id)contentByUpdatingWithAttributedMessageContext:(id)a0 error:(out id *)a1;
- (id)contentByUpdatingWithProvider:(id)a0 error:(out id *)a1;
- (id)contentByUpdatingWithReadAnnouncementIntent:(id)a0 error:(out id *)a1;
- (id)contentByUpdatingWithSendMessageIntent:(id)a0 error:(out id *)a1;
- (id)contentByUpdatingWithStartCallIntent:(id)a0 error:(out id *)a1;
- (void)enterSecurityScope;
- (void)leaveSecurityScope;
- (id)markedMutableCopyWithMessage:(id)a0;
- (void)removeSecurityScope;

@end
