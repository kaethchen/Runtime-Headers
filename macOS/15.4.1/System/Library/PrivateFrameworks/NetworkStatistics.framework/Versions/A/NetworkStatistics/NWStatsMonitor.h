@class NWStatsEntityMapperNEHelper, NWStatsEntityMapperCoalitionWatcher, NWStatsEntityMapperDynamicLaunchServices, NSSet, NSMutableDictionary, NWStatsEntityMapperProcessWatcher, NWStatsEntityMapperStaticAssignment;

@interface NWStatsMonitor : NSObject {
    NWStatsEntityMapperCoalitionWatcher *_coalitionUUIDMapper;
    NWStatsEntityMapperStaticAssignment *_staticAssignmentUUIDMapper;
    NWStatsEntityMapperNEHelper *_neHelperUUIDMapper;
    NWStatsEntityMapperDynamicLaunchServices *_dynamicLaunchServicesUUIDMapper;
    NWStatsEntityMapperProcessWatcher *_processWatcherUUIDMapper;
    BOOL _useNEHelper;
    BOOL _useLaunchServices;
    BOOL _useCoalitionIDs;
    BOOL _useProcessNames;
    BOOL _useStaticMapping;
    NSSet *_useNEHelperSet;
    NSSet *_appendProcNameSet;
    NSSet *_knownDaemonSet;
    NSMutableDictionary *_reportedLookupFailures;
}

@property (readonly) BOOL debugMode;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithQueue:(id)a0;
- (void)configure:(id)a0;
- (id)stateDictionary;
- (id)allIdentifiersForUUID:(id)a0 EUUID:(id)a1 pid:(int)a2 epid:(int)a3 procname:(char *)a4;
- (id)bestIdentifierForUUID:(id)a0 EUUID:(id)a1 pid:(int)a2 epid:(int)a3 procname:(char *)a4 derivation:(int *)a5;
- (id)extensionNameForUUID:(id)a0;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void)noteFailedLookupFor:(id)a0 processName:(char *)a1 pid:(int)a2;
- (void)noteUUID:(id)a0 forPid:(int)a1 procname:(char[64] *)a2;
- (id)processNameForUUID:(id)a0;
- (id)processNameForUUIDString:(id)a0;

@end
