@class NSObject;
@protocol OS_dispatch_queue;

@interface SCDAEmergencyCallPunchout : NSObject {
    NSObject<OS_dispatch_queue> *_myriadEmergencyCallingQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)initiateEmergencyCallMyriad;

@end
