@protocol ASDTDeviceInterestProtocol;

@interface ASDTDeviceInterest : NSObject

@property (weak, nonatomic) id<ASDTDeviceInterestProtocol> interested;
@property (nonatomic) int interests;

+ (id)createForObject:(id)a0 withInterests:(int)a1;

- (void).cxx_destruct;
- (id)initForObject:(id)a0 withInterests:(int)a1;
- (void)notifyOfInterest:(int)a0 forDevice:(id)a1;

@end
