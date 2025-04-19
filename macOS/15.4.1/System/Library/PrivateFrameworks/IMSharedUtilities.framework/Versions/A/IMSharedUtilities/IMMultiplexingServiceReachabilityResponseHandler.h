@class NSArray;

@interface IMMultiplexingServiceReachabilityResponseHandler : NSObject <IMServiceReachabilityResponseHandler>

@property (retain, nonatomic) NSArray *responseHandlers;

- (void).cxx_destruct;
- (id)initWithResponseHandlers:(id)a0;
- (void)reachabilityRequest:(id)a0 updatedWithResult:(id)a1;

@end
