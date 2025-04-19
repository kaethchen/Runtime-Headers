@class EDSenderPersistence;
@protocol EFScheduler;

@interface EDSenderRepository : NSObject

@property (readonly, nonatomic) EDSenderPersistence *senderPersistence;
@property (readonly, nonatomic) id<EFScheduler> persistenceScheduler;

+ (id)log;

- (void).cxx_destruct;
- (id)initWithSenderPersistence:(id)a0;
- (void)simpleAddressesForRelevantSendersForSearchWithCompletionHandler:(id /* block */)a0;

@end
