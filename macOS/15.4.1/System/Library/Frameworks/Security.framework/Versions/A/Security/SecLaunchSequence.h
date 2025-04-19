@class NSString, NSMutableDictionary, NSBlockOperation;

@interface SecLaunchSequence : NSObject {
    BOOL _firstLaunch;
}

@property BOOL launched;
@property (retain) NSString *name;
@property (retain) NSMutableDictionary *events;
@property (retain) NSMutableDictionary *attributes;
@property (retain) NSBlockOperation *launchOperation;
@property (retain) NSMutableDictionary *dependantLaunches;
@property BOOL firstLaunch;

- (void).cxx_destruct;
- (void)launch;
- (void)addAttribute:(id)a0 value:(id)a1;
- (void)addDependantLaunch:(id)a0 child:(id)a1;
- (void)addEvent:(id)a0;
- (id)eventsByTime;
- (id)eventsRelativeTime;
- (id)initWithRocketName:(id)a0;
- (id)metricsReport;

@end
