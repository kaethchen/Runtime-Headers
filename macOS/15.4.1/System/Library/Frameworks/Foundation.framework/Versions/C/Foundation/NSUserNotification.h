@class NSData, NSString, NSArray, NSURL, NSDate, NSAttributedString, NSDictionary, NSUserNotificationAction, NSImage, NSDateComponents, NSTimeZone;

@interface NSUserNotification : NSObject <NSCoding, NSCopying> {
    id _internal;
}

@property (retain) id _storageID;
@property (readonly, nonatomic) BOOL _hasContentImage;
@property (copy, nonatomic) NSData *_identityImageData;
@property (copy, nonatomic) NSData *_contentImageData;
@property (copy) NSURL *_imageURL;
@property BOOL _ignoresDoNotDisturb;
@property BOOL _clearable;
@property unsigned long long _style;
@property (readonly) NSDate *_nextFireDate;
@property (readonly) BOOL _snoozed;
@property (readonly) double _snoozeInterval;
@property (readonly) double _snoozedDate;
@property long long _badgeCount;
@property unsigned long long _displayStyle;
@property BOOL _poofsOnCancel;
@property (copy) NSDateComponents *_deliveryExpiration;
@property (copy) NSDate *_eventDate;
@property BOOL _dismissAfterDuration;
@property BOOL _actionButtonIsSnooze;
@property (copy) NSString *_dateString;
@property (getter=_isAllDayEvent) BOOL _allDayEvent;
@property (copy) NSDateComponents *duration;
@property (copy) NSImage *_identityImage;
@property BOOL _identityImageHasBorder;
@property unsigned long long _identityImageStyle;
@property BOOL _persistent;
@property (copy) NSArray *_alternateActionButtonTitles;
@property (readonly) unsigned long long _alternateActionIndex;
@property BOOL _alwaysShowAlternateActionMenu;
@property BOOL _showsButtons;
@property BOOL _lockscreenOnly;
@property BOOL _substitutesEmojiInResponse;
@property BOOL _hasAttachment;
@property (readonly, getter=_isRemote) BOOL _remote;
@property (copy) NSString *_proxyIdentifier;
@property (copy) NSArray *peopleIdentifiers;
@property (copy) NSString *title;
@property (copy) NSString *subtitle;
@property (copy) NSString *informativeText;
@property (copy) NSString *actionButtonTitle;
@property (copy) NSDictionary *userInfo;
@property (copy) NSDate *deliveryDate;
@property (copy) NSTimeZone *deliveryTimeZone;
@property (copy) NSDateComponents *deliveryRepeatInterval;
@property (readonly, copy) NSDate *actualDeliveryDate;
@property (readonly, getter=isPresented) BOOL presented;
@property (readonly, getter=isRemote) BOOL remote;
@property (copy) NSString *soundName;
@property BOOL hasActionButton;
@property (readonly) long long activationType;
@property (copy) NSString *otherButtonTitle;
@property (copy) NSString *identifier;
@property (copy) NSImage *contentImage;
@property BOOL hasReplyButton;
@property (copy) NSString *responsePlaceholder;
@property (readonly, copy) NSAttributedString *response;
@property (copy) NSArray *additionalActions;
@property (readonly, copy) NSUserNotificationAction *additionalActivationAction;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;
+ (void)_closestDatesForStartDate:(id)a0 earliestDate:(id)a1 timeZone:(id)a2 deliveryRepeatInterval:(id)a3 returnDateBefore:(id *)a4 returnDateAfter:(id *)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_areIdentifiersEqual:(id)a0;
- (id)_secureEncodedUserInfo;
- (void)_setActivationType:(long long)a0;
- (void)_setActualDeliveryDate:(id)a0;
- (void)_setIdentityImage:(id)a0 withIdentifier:(id)a1;
- (void)_setPresented:(BOOL)a0;
- (void)_setRemote:(BOOL)a0;
- (void)_setSnoozeInterval:(double)a0;
- (void)_setSnoozed:(BOOL)a0;
- (void)_setSnoozedDate:(double)a0;
- (void)setContentImage:(id)a0;

@end
