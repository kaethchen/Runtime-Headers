@class HKDataCollectorState;
@protocol HDDataCollector;

@interface HDDataCollectorRecord : NSObject

@property (weak, nonatomic) id<HDDataCollector> collector;
@property (retain, nonatomic) HKDataCollectorState *state;

- (id)description;
- (void).cxx_destruct;

@end
