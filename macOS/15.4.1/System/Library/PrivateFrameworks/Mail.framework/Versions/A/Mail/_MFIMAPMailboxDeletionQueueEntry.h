@class NSArray, MFIMAPAccount;

@interface _MFIMAPMailboxDeletionQueueEntry : NSObject

@property (retain, nonatomic) NSArray *urls;
@property (retain, nonatomic) NSArray *paths;
@property (retain, nonatomic) MFIMAPAccount *account;

- (void).cxx_destruct;

@end
