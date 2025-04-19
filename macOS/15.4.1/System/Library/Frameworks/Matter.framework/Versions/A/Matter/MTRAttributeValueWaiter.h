@class NSUUID, NSDictionary, MTRDevice, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MTRAttributeValueWaiter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_valueExpectations;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _completion;
    NSObject<OS_dispatch_source> *_expirationTimer;
    MTRDevice *_device;
}

@property (readonly, nonatomic) BOOL allValuesSatisfied;
@property (readonly, nonatomic) NSUUID *UUID;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (void)_startTimerWithTimeout:(double)a0;
- (BOOL)_attributeValue:(id)a0 reportedForPath:(id)a1 byDevice:(id)a2;
- (void)_notifyCancellation;
- (void)_notifyWithError:(id)a0;
- (id)initWithDevice:(id)a0 values:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

@end
