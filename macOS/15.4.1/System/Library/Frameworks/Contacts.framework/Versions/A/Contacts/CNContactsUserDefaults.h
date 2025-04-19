@class NSString;

@interface CNContactsUserDefaults : NSObject

@property (nonatomic) long long displayNameOrder;
@property (nonatomic) long long shortNameFormat;
@property (nonatomic, getter=isShortNameFormatEnabled) BOOL shortNameFormatEnabled;
@property (nonatomic) BOOL shortNameFormatPrefersNicknames;
@property (readonly) long long sortOrder;
@property (readonly, copy) NSString *countryCode;

+ (id)sharedDefaults;
+ (void)flushSharedInstance;

- (id)init;
- (id)changeNotificationName;
- (long long)newContactDisplayNameOrder;

@end
