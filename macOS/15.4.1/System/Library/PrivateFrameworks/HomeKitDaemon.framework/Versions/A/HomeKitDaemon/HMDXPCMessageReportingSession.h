@class HMFTimer, NSUUID, HMReportContext, HMDXPCClientConnection, NSMutableArray;

@interface HMDXPCMessageReportingSession : NSObject

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) HMReportContext *reportContext;
@property (weak) HMDXPCClientConnection *xpcClientConnection;
@property (readonly) NSMutableArray *responseMessagePayloads;
@property (retain) HMFTimer *endSessionTimer;
@property (retain) HMFTimer *consumeSessionResultsTimer;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 reportContext:(id)a1 xpcClientConnection:(id)a2;

@end
