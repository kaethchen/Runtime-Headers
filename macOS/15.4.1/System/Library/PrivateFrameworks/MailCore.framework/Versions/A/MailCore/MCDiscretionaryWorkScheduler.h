@class NSObject;
@protocol MCDiscretionaryWorkSchedulerDelegate, MCNetworkTracker;

@interface MCDiscretionaryWorkScheduler : NSObject {
    id _schedulerLock;
    unsigned long long _conditions;
    unsigned long long _unsatisfiedConditions;
    BOOL _overrideConditions;
    NSObject<MCNetworkTracker> *_networkTracker;
    BOOL _hasDeferrableWork;
    BOOL _suspended;
    id<MCDiscretionaryWorkSchedulerDelegate> _delegate;
}

@property (weak, nonatomic) NSObject<MCNetworkTracker> *networkTracker;
@property (readonly) BOOL deferDiscretionaryWork;
@property unsigned long long conditions;
@property (readonly) unsigned long long unsatisfiedConditions;
@property BOOL overrideConditions;
@property BOOL hasDeferrableWork;
@property BOOL suspended;
@property (weak, nonatomic) id<MCDiscretionaryWorkSchedulerDelegate> delegate;

+ (id)keyPathsForValuesAffectingDeferDiscretionaryWork;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_conditions:(unsigned long long)a0 becameSatified:(BOOL)a1;
- (void)_startTrackingConditions:(unsigned long long)a0;
- (void)_stopTrackingConditions:(unsigned long long)a0;

@end
