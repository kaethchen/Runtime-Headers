@protocol MTLEvent;

@interface EventAndSignal : NSObject

@property (retain, nonatomic) id<MTLEvent> event;
@property (nonatomic) unsigned long long signal;

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0 andSignal:(unsigned long long)a1;

@end
