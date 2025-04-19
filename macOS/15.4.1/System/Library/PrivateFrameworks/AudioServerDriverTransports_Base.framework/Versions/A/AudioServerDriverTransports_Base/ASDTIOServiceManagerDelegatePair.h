@class ASDTIOService;
@protocol ASDTIOServiceManagerDelegate;

@interface ASDTIOServiceManagerDelegatePair : NSObject

@property (retain, nonatomic) id<ASDTIOServiceManagerDelegate> delegate;
@property (retain, nonatomic) ASDTIOService *ioService;

+ (id)forDelegate:(id)a0 andIOService:(id)a1;

- (void).cxx_destruct;

@end
