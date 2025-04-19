@class NSString;

@interface IMServiceReachabilityFinalUnreachableResultPrecondition : IMServiceReachabilityPrecondition

@property (retain, nonatomic) NSString *serviceName;

+ (id)preconditionWithDictionary:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)evaluateWithLatestResults:(id)a0 requestedServices:(id)a1;

@end
