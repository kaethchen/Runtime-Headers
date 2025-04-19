@class NSArray, NSString;

@interface SecureSpeakerRecognitionConfig : NSObject {
    void /* unknown type, empty encoding */ phraseConfig;
    void /* unknown type, empty encoding */ satConfigString;
    void /* unknown type, empty encoding */ psrConfigString;
}

@property (nonatomic, readonly) NSArray *phraseConfig;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ numPruningRetentionUtt;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ pruningExplicitSATThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ pruningExplicitPSRThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ pruningSATThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ pruningPSRThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ combinationWeight;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ implicitProfileThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ implicitProfileDeltaThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ implicitVTThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ maxEnrollmentUtterances;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ implicitTrainingEnabled;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ useTDTIEnrollment;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ satMemoryIndex;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ psrMemoryIndex;
@property (nonatomic, copy) NSString *satConfigString;
@property (nonatomic, copy) NSString *psrConfigString;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNumPruningRetentionUtt:(long long)a0 pruningExplicitSATThreshold:(float)a1 pruningExplicitPSRThreshold:(float)a2 pruningSATThreshold:(float)a3 pruningPSRThreshold:(float)a4 combinationWeight:(float)a5 implicitProfileThreshold:(float)a6 implicitProfileDeltaThreshold:(float)a7 implicitVTThreshold:(float)a8 maxEnrollmentUtterances:(long long)a9 implicitTrainingEnabled:(BOOL)a10 useTDTIEnrollment:(BOOL)a11 phraseConfig:(id)a12 satMemoryIndex:(id)a13 psrMemoryIndex:(id)a14 satConfig:(id)a15 psrConfig:(id)a16;

@end
