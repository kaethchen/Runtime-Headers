@class NSMutableDictionary;

@interface IPInstallableProgressData : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_phaseStates;
    double _currentFractionCompleted;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long installPhase;
@property (nonatomic) unsigned long long finalPhase;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)fractionCompleted;
- (void)setCompletedUnitCount:(unsigned long long)a0 forPhase:(unsigned long long)a1;
- (id)_findOrCreatePhaseState:(unsigned long long)a0;
- (void)_recalculateCurrentFractionCompleted;
- (unsigned long long)completedUnitCountForPhase:(unsigned long long)a0;
- (void)setTotalUnitCount:(unsigned long long)a0 forPhase:(unsigned long long)a1;
- (void)setTotalUnitCountsForPhases:(id)a0;
- (unsigned long long)totalUnitCountForPhase:(unsigned long long)a0;

@end
