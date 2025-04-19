@class NSSet, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_os_log, OS_dispatch_source;

@interface CSProcessManager : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *logger;
@property (retain, nonatomic) NSSet *enrolledProcessesSet;
@property (retain, nonatomic) NSSet *exemptProcessesSet;
@property (retain, nonatomic) NSMutableDictionary *allProcessesMap;
@property (retain, nonatomic) NSMutableDictionary *processNameIdentiferByPID;
@property (retain, nonatomic) NSMutableDictionary *processNameIdentiferByName;
@property (retain, nonatomic) NSMutableSet *observers;
@property (nonatomic) BOOL onlyMonitorDaemons;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) float PIDPollingInterval;
@property (retain, nonatomic) NSMutableDictionary *currentPIDList;

+ (id)sharedInstanceWithEnrolledProcesses:(id)a0 andExemptions:(id)a1;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)fullProcessNameForPid:(int)a0;
- (id)processForIdentifier:(id)a0;
- (id)_initWithEnrolledProcesses:(id)a0 andExemptions:(id)a1;
- (id)getPollingInterval;
- (id)getProcessForPID:(int)a0;
- (id)identiferForName:(id)a0;
- (id)identiferForPID:(int)a0;
- (void)incrementCPUViolationCounter:(int)a0 fatal:(BOOL)a1;
- (void)modifyPollingInterval:(id)a0;
- (void)notifyObserversOfNewInstances:(id)a0;
- (void)pollPIDs;
- (void)recordTerminationForPID:(int)a0;
- (void)schedulePIDPolling;

@end
