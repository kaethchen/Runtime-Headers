@class NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface MTRCluster : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) NSNumber *endpointID;

- (void).cxx_destruct;
- (id)initWithEndpointID:(id)a0 queue:(id)a1;

@end
