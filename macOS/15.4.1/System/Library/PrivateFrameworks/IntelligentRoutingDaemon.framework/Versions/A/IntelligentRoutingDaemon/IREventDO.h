@class NSString;

@interface IREventDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) long long eventSubType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *contextIdentifier;
@property (readonly, nonatomic) BOOL isOutsideApp;
@property (readonly, nonatomic) BOOL isEligibleApp;

+ (id)atvUserInteractionEvents;
+ (id)eventDOWithAppleTVControlType:(long long)a0;
+ (id)eventDOWithEventType:(long long)a0 eventSubType:(long long)a1 name:(id)a2 bundleID:(id)a3 contextIdentifier:(id)a4 isOutsideApp:(BOOL)a5 isEligibleApp:(BOOL)a6;
+ (id)eventDOWithMediaType:(long long)a0;
+ (id)eventDOWithMediaType:(long long)a0 bundleID:(id)a1;
+ (id)mediaBrokeredDeviceEvents;
+ (id)mediaUserInteractionEvents;
+ (id)pickerChoiceEvents;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementEventType:(long long)a0;
- (id)copyWithReplacementName:(id)a0;
- (id)copyWithReplacementBundleID:(id)a0;
- (id)copyWithReplacementContextIdentifier:(id)a0;
- (id)copyWithReplacementEventSubType:(long long)a0;
- (id)copyWithReplacementIsEligibleApp:(BOOL)a0;
- (id)copyWithReplacementIsOutsideApp:(BOOL)a0;
- (id)exportAsDictionary;
- (id)initWithEventType:(long long)a0 eventSubType:(long long)a1 name:(id)a2 bundleID:(id)a3 contextIdentifier:(id)a4 isOutsideApp:(BOOL)a5 isEligibleApp:(BOOL)a6;
- (BOOL)isBannerEvent;
- (BOOL)isEqualToEventDO:(id)a0;
- (BOOL)isPickerChoiceEvent;
- (BOOL)isUserIntentionEvent;

@end
