@class NSArray, NSMutableDictionary, NSDate;

@interface CNContactStoreNotificationInfo : NSObject

@property (retain) NSMutableDictionary *publicUserInfo;
@property (retain) NSMutableDictionary *privateUserInfo;
@property (copy) NSArray *affectedSources;
@property (copy) NSDate *modificationDate;
@property BOOL couldAffectSync;
@property BOOL shouldSyncWhenSaved;
@property BOOL privateTablesChanged;
@property BOOL successfullyPrepared;

- (id)init;
- (void).cxx_destruct;

@end
