@class _MLNetworking, _MLNetworkPacket, _MLNetworkOptions, NSObject;
@protocol OS_dispatch_queue;

@interface _MLServer : NSObject

@property (readonly, nonatomic) _MLNetworking *nwObj;
@property (readonly, nonatomic) _MLNetworkOptions *nwOptions;
@property (readonly, nonatomic) _MLNetworkPacket *packet;
@property (copy, nonatomic) id /* block */ loadFunction;
@property (copy, nonatomic) id /* block */ predictFunction;
@property (copy, nonatomic) id /* block */ unLoadFunction;
@property (copy, nonatomic) id /* block */ textFunction;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *q;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)start;
- (void)stop;
- (void)setTextCommand:(id /* block */)a0;
- (void)setLoadCommand:(id /* block */)a0;
- (void)doReceive:(id)a0 context:(id)a1 isComplete:(BOOL)a2 error:(id)a3;
- (void)setPredictCommand:(id /* block */)a0;
- (void)setUnLoadCommand:(id /* block */)a0;

@end
