@class NSData, NSObject;
@protocol OS_dispatch_queue;

@interface MEHEVCDependencyInfo : NSObject <NSCopying> {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    BOOL _temporalSubLayerAccess;
    BOOL _stepwiseTemporalSubLayerAccess;
    short _syncSampleNALUnitType;
    short _temporalLevel;
    short _profileSpace;
    short _tierFlag;
    short _profileIndex;
    NSData *_profileCompatibilityFlags;
    NSData *_constraintIndicatorFlags;
    short _levelIndex;
}

@property (nonatomic) short temporalLevel;
@property (nonatomic) short profileSpace;
@property (nonatomic) short tierFlag;
@property (nonatomic) short profileIndex;
@property (copy, nonatomic) NSData *profileCompatibilityFlags;
@property (copy, nonatomic) NSData *constraintIndicatorFlags;
@property (nonatomic) short levelIndex;
@property (nonatomic, getter=hasTemporalSubLayerAccess) BOOL temporalSubLayerAccess;
@property (nonatomic, getter=hasStepwiseTemporalSubLayerAccess) BOOL stepwiseTemporalSubLayerAccess;
@property (nonatomic) short syncSampleNALUnitType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMEHEVCDependencyInfo:(id)a0;

@end
