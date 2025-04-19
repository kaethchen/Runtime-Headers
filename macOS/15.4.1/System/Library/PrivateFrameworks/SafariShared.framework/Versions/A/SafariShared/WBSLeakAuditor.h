@class NSArray, NSMapTable, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, WBSLeakAuditorReporterDelegate;

@interface WBSLeakAuditor : NSObject {
    BOOL _running;
    BOOL _reportLeaksToSystemLogs;
    NSArray *_rules;
    NSMapTable *_instanceCounts;
    NSMapTable *_violations;
    NSMutableSet *_detectedLeaks;
    NSObject<OS_dispatch_queue> *_bookkeeperQueue;
    NSObject<OS_dispatch_queue> *_enforcerQueue;
    NSObject<OS_dispatch_source> *_enforcerDispatchSource;
}

@property (class, readonly, nonatomic) WBSLeakAuditor *sharedAuditor;

@property (weak, nonatomic) id<WBSLeakAuditorReporterDelegate> reporterDelegate;

+ (id)_loadConfigFromPath:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_initBookkeeper;
- (void)_recordDealloc:(Class)a0;
- (void)_addRuleToViolationSetForEachClassInRule:(id)a0;
- (void)_enforceRules:(id)a0 reportOnlyPreexistingViolationsAsLeaks:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_initAndLaunchEnforcer;
- (void)_observeInstanceCounts:(id)a0;
- (id)_parseRulesFromConfig:(id)a0;
- (void)_recordAlloc:(Class)a0;
- (void)_removeRuleFromViolationSetForEachClassInRule:(id)a0;
- (void)_reportLeakToOSLogIfNecessary:(id)a0;
- (void)_reportRuleViolationAsLeak:(id)a0 instanceCounts:(id)a1;
- (void)_reviewViolations:(Class)a0 instanceCounts:(id)a1;
- (void)_swizzleAlloc:(Class)a0;
- (void)_swizzleDealloc:(Class)a0;
- (void)checkForLeaksSynchronously:(BOOL)a0;
- (void)runWithConfigJSONPath:(id)a0 reportLeaksToSystemLogs:(BOOL)a1;

@end
