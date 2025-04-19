@class BWNodeInput, BWNodeOutput;

@interface BWRefinedCinematographyNode : BWNode {
    BOOL _isRefinementSessionActive;
    int _numEODMessagesReceived;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastAudioPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstAudioPTS;
}

@property (readonly, nonatomic) BWNodeInput *videoInput;
@property (readonly, nonatomic) BWNodeInput *audioInput;
@property (readonly, nonatomic) BWNodeOutput *videoOutput;
@property (readonly, nonatomic) BWNodeOutput *audioOutput;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)initWithAudioEnabled:(BOOL)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
