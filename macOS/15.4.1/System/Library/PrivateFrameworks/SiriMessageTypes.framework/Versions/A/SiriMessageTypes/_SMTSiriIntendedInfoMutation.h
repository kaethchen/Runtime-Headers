@class NSString, SMTSiriIntendedInfo, NSNumber;

@interface _SMTSiriIntendedInfoMutation : NSObject <SMTSiriIntendedInfoMutating> {
    SMTSiriIntendedInfo *_base;
    float _odldScore;
    float _aftmScore;
    float _spkrIdScore;
    float _lrnnScore;
    float _checkerScore;
    float _lrnnThreshold;
    float _lrnnScale;
    float _lrnnOffset;
    BOOL _isGazeSignalPresent;
    NSNumber *_invocationType;
    float _conversationalOdldScore;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasOdldScore : 1; unsigned char hasAftmScore : 1; unsigned char hasSpkrIdScore : 1; unsigned char hasLrnnScore : 1; unsigned char hasCheckerScore : 1; unsigned char hasInvocationType : 1; unsigned char hasLrnnThreshold : 1; unsigned char hasLrnnScale : 1; unsigned char hasLrnnOffset : 1; unsigned char hasIsGazeSignalPresent : 1; unsigned char hasConversationalOdldScore : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isDirty;
- (id)initWithBase:(id)a0;
- (void)setAftmScore:(float)a0;
- (void)setConversationalOdldScore:(float)a0;
- (void)setInvocationType:(id)a0;
- (void)setLrnnScore:(float)a0;
- (void)setOdldScore:(float)a0;
- (void)setCheckerScore:(float)a0;
- (void)setLrnnThreshold:(float)a0;
- (void)setSpkrIdScore:(float)a0;
- (float)getCheckerScore;
- (float)getAftmScore;
- (float)getConversationalOdldScore;
- (BOOL)getGazeSignal;
- (id)getInvocationType;
- (float)getLrnnOffset;
- (float)getLrnnScale;
- (float)getLrnnScore;
- (float)getLrnnThreshold;
- (float)getOdldScore;
- (float)getSpkrIdScore;
- (void)setGazeSignal:(BOOL)a0;
- (void)setLrnnOffset:(float)a0;
- (void)setLrnnScale:(float)a0;

@end
