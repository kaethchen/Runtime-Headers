@interface SecCoreAnalytics : NSObject

+ (id)appNameFromPath:(id)a0;
+ (void)sendEvent:(id)a0 event:(id)a1;
+ (void)sendEventLazy:(id)a0 builder:(id /* block */)a1;

@end
