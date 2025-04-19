@class NSObject;
@protocol OS_dispatch_queue, HKCoreTelephonySatelliteClientDelegate;

@interface HKCoreTelephonySatelliteClient : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<HKCoreTelephonySatelliteClientDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (BOOL)isSatelliteSupportedForEmergencyDemo;

@end
