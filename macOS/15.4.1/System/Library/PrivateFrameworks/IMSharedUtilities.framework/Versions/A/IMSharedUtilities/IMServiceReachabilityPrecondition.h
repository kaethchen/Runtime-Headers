@interface IMServiceReachabilityPrecondition : NSObject

+ (id)_preconditionClasses;
+ (id)preconditionWithDictionary:(id)a0;

- (id)_latestResultsForServiceName:(id)a0 fromLatestResults:(id)a1;
- (unsigned long long)evaluateWithLatestResults:(id)a0 requestedServices:(id)a1;

@end
