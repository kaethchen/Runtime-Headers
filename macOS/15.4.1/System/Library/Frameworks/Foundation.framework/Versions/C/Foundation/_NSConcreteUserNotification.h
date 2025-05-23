@class NSData, NSString, NSURL, NSDate, NSArray, NSUserNotificationAction, NSDateComponents, NSTimeZone;

@interface _NSConcreteUserNotification : NSUserNotification <NSSecureCoding> {
    NSString *_title;
    NSString *_subtitle;
    NSString *_dateString;
    NSString *_informativeText;
    NSString *_actionButtonTitle;
    NSString *_otherButtonTitle;
    NSString *_soundName;
    NSString *_identifier;
    NSString *_proxyIdentifier;
    NSString *_responsePlaceholder;
    NSURL *_imageURL;
    NSData *_secureEncodedUserInfo;
    NSData *_encodedResponse;
    NSDate *_deliveryDate;
    NSTimeZone *_deliveryTimeZone;
    NSDateComponents *_deliveryRepeatInterval;
    NSDateComponents *_deliveryExpiration;
    NSDateComponents *_duration;
    NSDate *_eventDate;
    NSData *_contentImageData;
    NSData *_identityImageData;
    NSUserNotificationAction *_additionalActivationAction;
    unsigned long long _identityImageStyle;
    NSArray *_additionalActions;
    double _snoozeInterval;
    double _snoozedDate;
    NSArray *_alternateActionButtonTitles;
    unsigned long long _alternateActionIndex;
    NSArray *_peopleIdentifiers;
    NSDate *_actualDeliveryDate;
    id _storageID;
    unsigned long long _style;
    unsigned long long _displayStyle;
    long long _activationType;
    long long _badgeCount;
    BOOL _hasActionButton;
    BOOL _presented;
    BOOL _snoozed;
    BOOL _remote;
    BOOL _clearable;
    BOOL _allDayEvent;
    BOOL _actionButtonIsSnooze;
    BOOL _dismissAfterDuration;
    BOOL _persistent;
    BOOL _poofsOnCancel;
    BOOL _ignoresDoNotDisturb;
    BOOL _hasReplyButton;
    BOOL _showsButtons;
    BOOL _lockscreenOnly;
    BOOL _substitutesEmojiInResponse;
    BOOL _hasAttachment;
    BOOL _alwaysShowAlternateActionMenu;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)userInfo;
- (void)setIdentifier:(id)a0;
- (void)setTitle:(id)a0;
- (void)setUserInfo:(id)a0;
- (void)set_badgeCount:(long long)a0;
- (void)set_persistent:(BOOL)a0;
- (BOOL)_lockscreenOnly;
- (void)_setAdditionalActivationAction:(id)a0;
- (double)_snoozeInterval;
- (BOOL)hasActionButton;
- (id)informativeText;
- (void)set_dateString:(id)a0;
- (void)set_substitutesEmojiInResponse:(BOOL)a0;
- (BOOL)_actionButtonIsSnooze;
- (id)_alternateActionButtonTitles;
- (unsigned long long)_alternateActionIndex;
- (BOOL)_alwaysShowAlternateActionMenu;
- (BOOL)_areIdentifiersEqual:(id)a0;
- (long long)_badgeCount;
- (BOOL)_clearable;
- (id)_contentImageData;
- (id)_dateString;
- (id)_deliveryExpiration;
- (BOOL)_dismissAfterDuration;
- (unsigned long long)_displayStyle;
- (id)_eventDate;
- (BOOL)_hasAttachment;
- (BOOL)_hasContentImage;
- (id)_identityImage;
- (id)_identityImageData;
- (BOOL)_identityImageHasBorder;
- (unsigned long long)_identityImageStyle;
- (BOOL)_ignoresDoNotDisturb;
- (id)_imageURL;
- (BOOL)_isAllDayEvent;
- (BOOL)_isRemote;
- (id)_nextFireDate;
- (BOOL)_persistent;
- (BOOL)_poofsOnCancel;
- (id)_proxyIdentifier;
- (id)_secureEncodedUserInfo;
- (void)_setActivationType:(long long)a0;
- (void)_setActualDeliveryDate:(id)a0;
- (void)_setAlternateActionIndex:(unsigned long long)a0;
- (void)_setEncodedUserInfo:(id)a0;
- (void)_setIdentityImage:(id)a0 withIdentifier:(id)a1;
- (void)_setPresented:(BOOL)a0;
- (void)_setResponse:(id)a0;
- (void)_setSnoozeInterval:(double)a0;
- (void)_setSnoozed:(BOOL)a0;
- (void)_setSnoozedDate:(double)a0;
- (BOOL)_showsButtons;
- (BOOL)_snoozed;
- (double)_snoozedDate;
- (id)_storageID;
- (unsigned long long)_style;
- (BOOL)_substitutesEmojiInResponse;
- (id)_subtitle;
- (id)actionButtonTitle;
- (long long)activationType;
- (id)actualDeliveryDate;
- (id)additionalActions;
- (id)additionalActivationAction;
- (id)contentImage;
- (id)deliveryDate;
- (id)deliveryRepeatInterval;
- (id)deliveryTimeZone;
- (id)duration;
- (BOOL)hasReplyButton;
- (BOOL)isPresented;
- (BOOL)isRemote;
- (id)otherButtonTitle;
- (id)peopleIdentifiers;
- (id)response;
- (id)responsePlaceholder;
- (void)setActionButtonTitle:(id)a0;
- (void)setAdditionalActions:(id)a0;
- (void)setContentImage:(id)a0;
- (void)setDeliveryDate:(id)a0;
- (void)setDeliveryRepeatInterval:(id)a0;
- (void)setDeliveryTimeZone:(id)a0;
- (void)setDuration:(id)a0;
- (void)setHasActionButton:(BOOL)a0;
- (void)setHasReplyButton:(BOOL)a0;
- (void)setInformativeText:(id)a0;
- (void)setOtherButtonTitle:(id)a0;
- (void)setPeopleIdentifiers:(id)a0;
- (void)setRemote:(BOOL)a0;
- (void)setResponsePlaceholder:(id)a0;
- (void)setSoundName:(id)a0;
- (void)setSubtitle:(id)a0;
- (void)set_actionButtonIsSnooze:(BOOL)a0;
- (void)set_allDayEvent:(BOOL)a0;
- (void)set_alternateActionButtonTitles:(id)a0;
- (void)set_alwaysShowAlternateActionMenu:(BOOL)a0;
- (void)set_clearable:(BOOL)a0;
- (void)set_contentImageData:(id)a0;
- (void)set_deliveryExpiration:(id)a0;
- (void)set_dismissAfterDuration:(BOOL)a0;
- (void)set_displayStyle:(unsigned long long)a0;
- (void)set_eventDate:(id)a0;
- (void)set_hasAttachment:(BOOL)a0;
- (void)set_identityImage:(id)a0;
- (void)set_identityImageData:(id)a0;
- (void)set_identityImageHasBorder:(BOOL)a0;
- (void)set_identityImageStyle:(unsigned long long)a0;
- (void)set_ignoresDoNotDisturb:(BOOL)a0;
- (void)set_imageURL:(id)a0;
- (void)set_lockscreenOnly:(BOOL)a0;
- (void)set_poofsOnCancel:(BOOL)a0;
- (void)set_proxyIdentifier:(id)a0;
- (void)set_showsButtons:(BOOL)a0;
- (void)set_storageID:(id)a0;
- (void)set_style:(unsigned long long)a0;
- (void)set_subtitle:(id)a0;
- (id)soundName;
- (id)subtitle;
- (id)title;

@end
