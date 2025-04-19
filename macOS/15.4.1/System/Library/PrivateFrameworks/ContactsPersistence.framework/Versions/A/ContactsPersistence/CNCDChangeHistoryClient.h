@class NSString, NSPersistentHistoryToken, NSData, NSNumber;

@interface CNCDChangeHistoryClient : NSManagedObject

@property (copy, nonatomic) NSData *lastTokenData;
@property (copy, nonatomic) NSNumber *needsFullSyncNumber;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSPersistentHistoryToken *lastToken;
@property (nonatomic) BOOL needsFullSync;

+ (id)os_log;

@end
