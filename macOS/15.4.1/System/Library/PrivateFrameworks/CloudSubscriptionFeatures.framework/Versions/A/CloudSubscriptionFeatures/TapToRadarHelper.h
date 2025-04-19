@class NSObject;
@protocol OS_dispatch_queue;

@interface TapToRadarHelper : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)dispatchQueue;
+ (void)tapToRadar:(id)a0 withMessage:(id)a1 withReason:(id)a2;

- (void).cxx_destruct;

@end
