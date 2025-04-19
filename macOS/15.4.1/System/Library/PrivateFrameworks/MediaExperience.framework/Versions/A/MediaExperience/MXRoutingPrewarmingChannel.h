@class NSString, NSArray;

@interface MXRoutingPrewarmingChannel : NSObject

@property (copy) id /* block */ closeChannelBlock;
@property (copy) id /* block */ persistPrewarmingBlock;
@property (readonly, nonatomic) struct OpaqueFigEndpoint { } *endpoint;
@property (readonly, nonatomic) NSString *routingContextUUID;
@property (readonly, nonatomic) NSArray *previousRouteDescriptors;

- (void)dealloc;
- (void)closeChannel;
- (id)initWithRoutingContextUUID:(id)a0 endpoint:(struct OpaqueFigEndpoint { } *)a1 previousRouteDescriptors:(id)a2;
- (void)persistChannel;

@end
