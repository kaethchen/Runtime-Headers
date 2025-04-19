@class NSString, BKSProcessAssertion, NSObject;
@protocol OS_dispatch_source;

@interface MSVTaskAssertion : NSObject {
    NSString *_uuid;
    NSString *_subsystem;
    int _pid;
    NSObject<OS_dispatch_source> *_invalidationTimer;
    BOOL _acquired;
    double _startTime;
    BKSProcessAssertion *_processAssertion;
}

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)acquire;
- (BOOL)isAcquired;
- (unsigned int)_BSKFlagsForMSVFlags:(unsigned long long)a0;
- (unsigned int)_BSKReasonForMSVReason:(unsigned long long)a0;
- (void)_cancelInvalidationTimerWithCompletion:(id /* block */)a0;
- (id)_initWithName:(id)a0 bundleID:(id)a1 pid:(int)a2 subsystem:(id)a3 reason:(unsigned long long)a4 flags:(unsigned long long)a5;
- (id)initWithName:(id)a0 bundleID:(id)a1 subsystem:(id)a2 reason:(unsigned long long)a3 flags:(unsigned long long)a4;
- (id)initWithName:(id)a0 pid:(int)a1 bundleID:(id)a2 subsystem:(id)a3 reason:(unsigned long long)a4 flags:(unsigned long long)a5;
- (id)initWithName:(id)a0 pid:(int)a1 subsystem:(id)a2 reason:(unsigned long long)a3 flags:(unsigned long long)a4;
- (void)invalidateOnDate:(id)a0;

@end
