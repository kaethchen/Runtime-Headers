@class NSString, CLSilo;

@interface CLSiloHeartbeatRecord : NSObject

@property (readonly, nonatomic) CLSilo *silo;
@property (readonly, nonatomic) Class svcClass;
@property (readonly) NSString *svcName;
@property (nonatomic) int residentCount;
@property (readonly, nonatomic) int synCount;
@property (readonly, nonatomic) int ackCount;

- (void).cxx_destruct;
- (void)ack;
- (void)syn;
- (id)initTrackingServiceClass:(Class)a0 name:(id)a1;

@end
