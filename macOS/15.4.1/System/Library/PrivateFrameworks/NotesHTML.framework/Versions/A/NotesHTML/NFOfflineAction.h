@class NFAccount;

@interface NFOfflineAction : NSManagedObject

@property (nonatomic) long long sequenceNumber;
@property (retain, nonatomic) NFAccount *account;

+ (BOOL)pendingOfflineActionsExist;

- (void)awakeFromInsert;
- (id)compactDescription;

@end
