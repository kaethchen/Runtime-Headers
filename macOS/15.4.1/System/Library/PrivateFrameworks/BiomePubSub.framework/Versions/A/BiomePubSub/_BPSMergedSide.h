@class _BPSMerged, NSString;

@interface _BPSMergedSide : NSObject <BPSSubscriber>

@property (retain, nonatomic) _BPSMerged *merger;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)receiveCompletion:(id)a0;
- (long long)receiveInput:(id)a0;
- (void)receiveSubscription:(id)a0;
- (id)initWithIndex:(long long)a0 merger:(id)a1;

@end
