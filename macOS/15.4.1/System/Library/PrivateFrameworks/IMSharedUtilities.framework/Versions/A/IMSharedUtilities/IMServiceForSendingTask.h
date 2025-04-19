@class NSArray, NSString;

@interface IMServiceForSendingTask : NSObject <IMServiceReachabilityResponseHandler> {
    void /* unknown type, empty encoding */ taskID;
    void /* unknown type, empty encoding */ requestedServices;
    void /* unknown type, empty encoding */ requestIDToResults;
    void /* unknown type, empty encoding */ pendingRequests;
    void /* unknown type, empty encoding */ updateHandler;
    void /* unknown type, empty encoding */ deadline;
    void /* unknown type, empty encoding */ latestBestResult;
}

@property (nonatomic, readonly) NSArray *requestIDs;
@property (nonatomic, readonly) NSString *taskID;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (void)submitRequestWithID:(id)a0 serviceName:(id)a1 preconditions:(id)a2 clearanceHandler:(id /* block */)a3;
- (id)initWithDelegate:(id)a0 updateHandler:(id /* block */)a1;
- (void)allRequestsSubmitted;
- (void)beganRequestWithID:(id)a0;
- (void)cancelledRequestWithID:(id)a0;
- (void)reachabilityRequest:(id)a0 updatedWithResult:(id)a1;

@end
