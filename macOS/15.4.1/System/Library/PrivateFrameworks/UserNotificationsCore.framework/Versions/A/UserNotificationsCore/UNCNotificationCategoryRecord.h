@class NSArray, NSString;

@interface UNCNotificationCategoryRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) BOOL hasCustomDismissAction;
@property (nonatomic) BOOL hasFollowActivityAction;
@property (nonatomic) BOOL hasCustomSilenceAction;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *intentIdentifiers;
@property (copy, nonatomic) NSArray *minimalActions;
@property (nonatomic) BOOL shouldAllowInCarPlay;
@property (nonatomic) BOOL privacyOptionShowTitle;
@property (nonatomic) BOOL privacyOptionShowSubtitle;
@property (nonatomic) BOOL preventAutomaticRemovalFromRecent;
@property (nonatomic) BOOL revealAdditionalContentWhenPresented;
@property (nonatomic) BOOL preventAutomaticLock;
@property (nonatomic) BOOL preventDismissWhenClosed;
@property (nonatomic) BOOL presentFullScreenAlertOverList;
@property (nonatomic) BOOL shouldAllowActionsInCarPlay;
@property (nonatomic) BOOL shouldAllowPersistentBannersInCarPlay;
@property (nonatomic) BOOL playMediaWhenRaised;
@property (nonatomic) BOOL preventClearFromList;
@property (nonatomic) BOOL alwaysDisplayNotificationsIndicator;
@property (nonatomic) BOOL suppressDelayForForwardedNotifications;
@property (nonatomic) BOOL suppressDismissActionInCarPlay;
@property (nonatomic) BOOL suppressPresentationInAmbient;
@property (copy, nonatomic) NSString *privateBody;
@property (copy, nonatomic) NSString *summaryFormat;
@property (copy, nonatomic) NSString *backgroundStyle;
@property (copy, nonatomic) NSString *listPriority;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
