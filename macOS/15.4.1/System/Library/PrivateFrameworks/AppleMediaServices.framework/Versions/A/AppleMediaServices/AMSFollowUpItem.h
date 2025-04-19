@class NSDate, NSString, NSArray, AMSMetricsEvent, NSMutableDictionary, AMSFollowUpNotification, ACAccount, NSObject;
@protocol OS_dispatch_queue;

@interface AMSFollowUpItem : NSObject

@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain) NSObject<OS_dispatch_queue> *metricsQueue;
@property (retain) ACAccount *account;
@property (retain) AMSFollowUpNotification *notification;
@property (retain) NSArray *actions;
@property (readonly) BOOL active;
@property (readonly) NSString *backingIdentifier;
@property (retain) NSString *bundleIconName;
@property BOOL disableGrouping;
@property long long displayStyle;
@property (retain) NSDate *expirationDate;
@property (getter=isExpirationDateHidden) BOOL expirationDateHidden;
@property (retain) NSString *footer;
@property (readonly) NSString *groupIdentifier;
@property (getter=isHardwareOffer) BOOL hardwareOffer;
@property (retain) NSString *identifier;
@property (retain) NSString *informativeText;
@property (retain) NSString *logKey;
@property BOOL keepNotificationOnLockscreen;
@property (copy) AMSMetricsEvent *metricsEvent;
@property (getter=isNewDeviceOutreach) BOOL newDeviceOutreach;
@property long long priority;
@property BOOL shouldPostNotification;
@property (retain) NSString *title;
@property (retain) NSMutableDictionary *userInfo;

+ (id)_dateFromString:(id)a0;
+ (id)backingIdentifierForIdentifier:(id)a0 account:(id)a1;
+ (id)componentsFromBackingIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)generateItem;
- (id)initWithFollowUpItem:(id)a0;
- (id)initWithIdentifier:(id)a0 account:(id)a1 priority:(long long)a2;
- (id)initWithIdentifier:(id)a0 jsonDictionary:(id)a1 account:(id)a2 priority:(long long)a3 logKey:(id)a4;
- (id)postMetricsWithBag:(id)a0;
- (id)postMetricsWithBagContract:(id)a0;
- (BOOL)shouldOverwriteItem:(id)a0;

@end
