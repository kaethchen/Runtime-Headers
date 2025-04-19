@interface IPFeatureManager : NSObject

+ (id)featuresForTextString:(id)a0 inMessageUnit:(id)a1;
+ (void)scanEventsInMessageUnits:(id)a0 completionHandler:(id /* block */)a1;
+ (void)scanEventsInMessageUnits:(id)a0 synchronously:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (void)setEventStoreForTesting:(id)a0;

@end
