@class NSString, _UINSLifecycleWatchdogInternal;

@interface UINSLifecycleWatchdog : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) _UINSLifecycleWatchdogInternal *innerWatchdog;

- (id)description;
- (void).cxx_destruct;
- (id)_watchdogNameForStateIdentifier:(long long)a0;
- (void)cancelWatchdog;
- (id)initWithStateIdentifier:(long long)a0 andTimeout:(double)a1;

@end
