@interface IMServiceReachabilityResponseBlockHandler : NSObject <IMServiceReachabilityResponseHandler>

@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)reachabilityRequest:(id)a0 updatedWithResult:(id)a1;

@end
