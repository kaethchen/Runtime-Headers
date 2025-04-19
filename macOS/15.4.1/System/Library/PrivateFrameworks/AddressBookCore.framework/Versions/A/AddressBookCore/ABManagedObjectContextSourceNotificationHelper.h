@class NSManagedObjectContext, NSDictionary, NSObject;
@protocol OS_os_log;

@interface ABManagedObjectContextSourceNotificationHelper : NSObject

@property (readonly, nonatomic) NSManagedObjectContext *context;
@property (retain, nonatomic) NSDictionary *changes;
@property (nonatomic) BOOL meCardChanged;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;

+ (id)changesNotifier;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (void)sendMeDidChange;
- (void)analyzeChanges;
- (void)analyzeMeCardChanges;
- (void)analyzeRecordChanges;
- (BOOL)hasMeCardBeenUpdated;
- (BOOL)hasMeCardHasChangedToAnotherCard;
- (void)sendDidChangeNotifications;
- (void)sendRecordsDidChange;
- (void)sendWillChangeNotifications;

@end
