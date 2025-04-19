@interface FIAnalytics : NSObject

+ (id)sharedAnalytics;

- (void)sendAnalytics:(id)a0;
- (void)sendEvent:(id)a0 eventDictionary:(id /* block */)a1;

@end
