@class RBInheritanceCollection, NSString, RBSProcessIdentity, NSMutableSet, NSSet, RBMutableProcessAppNapState, NSMutableDictionary;

@interface RBProcessState : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_maxCPULimitsByRole;
    NSMutableDictionary *_minCPULimitsByRole;
    NSMutableDictionary *_jetsamLenientModeByRole;
    NSMutableSet *_tags;
    NSMutableSet *_legacyAssertions;
    NSMutableSet *_primitiveAssertions;
    unsigned short _flags;
}

@property (readonly, copy, nonatomic) RBSProcessIdentity *identity;
@property (readonly, nonatomic) unsigned char role;
@property (readonly, nonatomic) BOOL preventSuspend;
@property (readonly, nonatomic) unsigned char gpuRole;
@property (readonly, nonatomic) unsigned char terminationResistance;
@property (readonly, nonatomic) unsigned long long explicitJetsamBand;
@property (readonly, nonatomic) BOOL isBeingDebugged;
@property (readonly, nonatomic) BOOL preventBaseMemoryLimitReduction;
@property (readonly, nonatomic) BOOL preventIdleSleep;
@property (readonly, nonatomic) BOOL jetsamLenientMode;
@property (readonly, nonatomic) BOOL throttleBestEffortNetworking;
@property (readonly, nonatomic) BOOL effectiveJetsamLenientMode;
@property (readonly, nonatomic) BOOL forceRoleManage;
@property (readonly, nonatomic) BOOL guaranteedRunning;
@property (readonly, nonatomic) BOOL targetedBySuspendableAssertion;
@property (readonly, nonatomic) NSString *memoryLimitCategory;
@property (readonly, nonatomic) unsigned char memoryLimitStrength;
@property (readonly, nonatomic) int memoryLimit;
@property (readonly, nonatomic) unsigned long long effectiveMaxCPUPercentage;
@property (readonly, nonatomic) unsigned long long effectiveMaxCPUDuration;
@property (readonly, nonatomic) unsigned long long effectiveMaxCPUUsageViolationPolicy;
@property (readonly, nonatomic) unsigned long long effectiveMinCPUPercentage;
@property (readonly, nonatomic) unsigned long long effectiveMinCPUDuration;
@property (readonly, nonatomic) unsigned long long coalitionLevel;
@property (readonly, nonatomic) unsigned long long legacyFinishTaskReason;
@property (readonly, nonatomic) NSMutableSet *preventIdleSleepIdentifiers;
@property (readonly, nonatomic) RBInheritanceCollection *inheritances;
@property (readonly, nonatomic) NSSet *preventLaunchReasons;
@property (readonly, copy, nonatomic) NSSet *tags;
@property (readonly, copy, nonatomic) NSSet *legacyAssertions;
@property (readonly, copy, nonatomic) NSSet *primitiveAssertions;
@property (readonly, copy, nonatomic) NSMutableSet *endowmentInfos;
@property (readonly, nonatomic) BOOL carPlayMode;
@property (readonly, nonatomic) BOOL appNapEnabled;
@property (readonly, nonatomic) BOOL appNapInactive;
@property (readonly, nonatomic) BOOL appNapPreventBackgroundSockets;
@property (readonly, nonatomic) BOOL appNapPreventDiskThrottle;
@property (readonly, nonatomic) BOOL appNapPreventLowPriorityCPU;
@property (readonly, nonatomic) BOOL appNapPreventSuppressedCPU;
@property (readonly, nonatomic) unsigned char appNapPreventTimerThrottleTier;
@property (readonly, nonatomic) RBMutableProcessAppNapState *appNapState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)a0;
- (id)clientStateForProcess:(id)a0;
- (id)inheritancesForEnvironment:(id)a0;
- (BOOL)isAppNapEqualToProcessState:(id)a0;
- (BOOL)isEqualToProcessStateIgnoringIdentity:(id)a0;
- (BOOL)isEqualToProcessStateIgnoringInheritances:(id)a0;
- (id)maxCPUUsageLimitsForRole:(unsigned char)a0;
- (id)minCPUUsageLimitsForRole:(unsigned char)a0;

@end
