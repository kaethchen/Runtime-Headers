@protocol MTLSharedEvent;

@interface MLPredictionSyncPoint : NSObject

@property (readonly, nonatomic) id<MTLSharedEvent> sharedEvent;
@property (readonly, nonatomic) unsigned long long value;

- (void).cxx_destruct;
- (void)notify;
- (id)initWithSharedEvent:(id)a0 value:(unsigned long long)a1;

@end
