@class NSString, BPSSubscription, BPSPublisher, BMStreamVirtualTable;

@interface BMPublisherVirtualTableCursor : NSObject <BPSSubscriber>

@property (readonly, nonatomic) BMStreamVirtualTable *virtualTable;
@property (readonly, nonatomic) BPSPublisher *publisher;
@property (readonly, nonatomic) BPSSubscription *subscription;
@property (readonly, nonatomic) id rowObject;
@property (readonly, nonatomic) long long rowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)reset;
- (void)cancel;
- (void)advance;
- (void)_advance;
- (void)receivedEvent:(id)a0;
- (void)_resetWithPublisher:(id)a0;
- (id)initWithVirtualTable:(id)a0;
- (void)receiveCompletion:(id)a0;
- (long long)receiveInput:(id)a0;
- (void)receiveSubscription:(id)a0;
- (void)requestNextEvents;
- (void)resetWithOptions:(id)a0;
- (void)subscribeTo:(id)a0;

@end
