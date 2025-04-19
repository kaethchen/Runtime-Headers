@class NSMutableDictionary;

@interface NSIATrackedActionsManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *trackedActionsCountDictionary;

- (id)init;
- (void).cxx_destruct;
- (void)addCounterWithName:(id)a0;
- (id)decrementCounterForName:(id)a0;
- (id)incrementCounterForName:(id)a0;
- (BOOL)isActionExpectedForName:(id)a0;

@end
