@class NSTimer, NSMutableArray;

@interface UASettingsTransaction : NSObject

@property (class, readonly, nonatomic) NSMutableArray *_transactionIdentifiers;
@property (class, retain, nonatomic) NSTimer *_transactionReleaseTimer;
@property (class, readonly, nonatomic) NSMutableArray *_rootTransactionBlocks;
@property (class, readonly, nonatomic) BOOL hasCurrentTransaction;

+ (void)initialize;
+ (void)_registerForNotifications;
+ (void)endTransaction:(id)a0;
+ (void)beginTransaction:(id)a0;
+ (void)performOnFinalTransactionCommit:(id /* block */)a0;
+ (void)_commitRootTransaction;
+ (BOOL)_shouldListenToTransactionNotifications;
+ (BOOL)_shouldSendTransactionNotifications;
+ (void)_transactionBeginNotification:(id)a0;
+ (void)_transactionEndNotification:(id)a0;
+ (void)performWithTransaction:(id)a0 work:(id /* block */)a1;

@end
