@class NSString, BCSOpenHours, NSArray, NSURL, BCSBusinessItemIdentifier, NSDate;

@interface BCSBusinessItem : BCSItem <NSCopying, NSSecureCoding> {
    BCSBusinessItemIdentifier *_itemIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *callSubtitle;
@property (readonly, nonatomic) NSString *messageTitle;
@property (readonly, nonatomic) NSString *messageSubtitle;
@property (readonly, nonatomic) BCSOpenHours *messagingOpenHours;
@property (readonly, nonatomic) BCSOpenHours *callingOpenHours;
@property (readonly, nonatomic, getter=_businessItemIdentifier) BCSBusinessItemIdentifier *businessItemIdentifier;
@property (readonly, nonatomic) NSArray *visibilityItems;
@property (readonly, copy, nonatomic) NSString *bizID;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long phoneHash;
@property (readonly, copy, nonatomic) NSURL *squareLogoURL;
@property (readonly, copy, nonatomic) NSURL *wideLogoURL;
@property (readonly, nonatomic) unsigned long long tintColor;
@property (readonly, nonatomic) unsigned long long backgroundColor;
@property (readonly, nonatomic) NSArray *callToActions;
@property (readonly, nonatomic) BOOL isVerified;
@property (readonly, nonatomic) NSString *intentID;
@property (readonly, nonatomic) NSString *groupID;
@property (readonly, nonatomic) NSURL *messagesOpenURL;
@property (readonly, nonatomic) BOOL isAvailableForMessaging;
@property (readonly, nonatomic) NSDate *dateWhenMessagingAvailableNext;
@property (readonly, nonatomic) BOOL isAvailableForCalling;
@property (readonly, nonatomic) NSDate *dateWhenCallingAvailableNext;

+ (id)businessItemsFromChatSuggestJSONObj:(id)a0;
+ (id)businessItemsFromChatSuggestMessageDictionary:(id)a0;
+ (id)businessItemsFromRecords:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)itemIdentifier;
- (long long)type;
- (id)callToAction;
- (BOOL)_isAvailableForMessagingAtDate:(id)a0;
- (id)_availableNextStringFromAvailableNextDate:(id)a0;
- (id)_availableNextStringFromAvailableNextDate:(id)a0 relativeToDate:(id)a1 timeZone:(id)a2 isDevice24HourTime:(BOOL)a3 calendar:(id)a4 localizedStringProvider:(id)a5;
- (id)_callToActionForLanguage:(id)a0;
- (id)_dateWhenCallingAvailableNextAfterDate:(id)a0;
- (id)_dateWhenMessagingAvailableNextAfterDate:(id)a0;
- (id)_escapedVersionOfInputString:(id)a0;
- (unsigned long long)_integerForHexString:(id)a0;
- (BOOL)_isAvailableForCallingAtDate:(id)a0;
- (BOOL)_isChatSuggestVisibleForVisibilityItem:(id)a0 messagesIdentifier:(id)a1 bizID:(id)a2;
- (BOOL)_isDate1:(id)a0 theSameDayAsDate2:(id)a1 timeZone:(id)a2;
- (id)_messagesOpenURLParameters;
- (id)_selectedVisibilityItemForLanguage:(id)a0 country:(id)a1;
- (id)_visibilityItemsDescription;
- (id)initWithBizID:(id)a0 phoneNumber:(id)a1 name:(id)a2 phoneHash:(long long)a3 squareLogoURL:(id)a4 wideLogoURL:(id)a5 tintColor:(unsigned long long)a6 backgroundColor:(unsigned long long)a7 callToActions:(id)a8 messagingOpenHours:(id)a9 callingOpenHours:(id)a10 isVerified:(BOOL)a11 intentID:(id)a12 groupID:(id)a13 visibilityItems:(id)a14;
- (id)initWithChatSuggestMessage:(id)a0 bucketID:(id)a1;
- (id)initWithJSONObj:(id)a0;
- (BOOL)matchesItemIdentifying:(id)a0;
- (long long)truncatedHash;

@end
