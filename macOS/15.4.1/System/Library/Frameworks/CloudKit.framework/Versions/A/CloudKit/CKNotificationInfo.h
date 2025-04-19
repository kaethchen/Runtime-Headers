@class NSString, NSArray;

@interface CKNotificationInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *alertBody;
@property (copy) NSString *alertLocalizationKey;
@property (copy) NSArray *alertLocalizationArgs;
@property (copy) NSString *title;
@property (copy) NSString *titleLocalizationKey;
@property (copy) NSArray *titleLocalizationArgs;
@property (copy) NSString *subtitle;
@property (copy) NSString *subtitleLocalizationKey;
@property (copy) NSArray *subtitleLocalizationArgs;
@property (copy) NSString *alertActionLocalizationKey;
@property (copy) NSString *alertLaunchImage;
@property (copy) NSString *soundName;
@property (copy) NSArray *desiredKeys;
@property BOOL shouldBadge;
@property BOOL shouldSendContentAvailable;
@property BOOL shouldSendMutableContent;
@property (copy) NSString *category;
@property (copy) NSString *collapseIDKey;

+ (void)initialize;
+ (id)notificationInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
