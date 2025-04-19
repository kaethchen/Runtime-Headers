@class NSArray, NSMutableDictionary, NSDate;

@interface ABAddressBookNotificationInfo : NSObject

@property (retain) NSMutableDictionary *publicUserInfo;
@property (retain) NSMutableDictionary *privateUserInfo;
@property (copy) NSArray *affectedSources;
@property (copy) NSDate *modificationDate;
@property BOOL couldAffectSync;
@property BOOL shouldSyncWhenSaved;
@property BOOL privateTablesChanged;
@property BOOL successfullyPrepared;

- (void)dealloc;
- (id)init;

@end
