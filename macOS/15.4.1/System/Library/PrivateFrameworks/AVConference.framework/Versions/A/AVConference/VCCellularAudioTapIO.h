@class VCAudioIO, VCAudioPowerSpectrumSource, VCMediaRecorder;

@interface VCCellularAudioTapIO : NSObject {
    struct tagVCCellularAudioTapIORealtimeContext { long long streamToken; unsigned int tapType; struct _VCAudioPowerSpectrumSourceRealtimeContext *powerSpectrumSourceRealtimeContext; VCMediaRecorder *mediaRecorder; float averageAudioPower; } _realtimeContext;
}

@property (retain, nonatomic) VCMediaRecorder *mediaRecorder;
@property (retain, nonatomic) VCAudioIO *audioIO;
@property (nonatomic) BOOL enableAsyncTapStart;
@property (nonatomic) unsigned long long audioAssertionCounter;
@property (readonly, nonatomic) long long streamToken;
@property (readonly, nonatomic) VCAudioPowerSpectrumSource *powerSpectrumSource;
@property (readonly, nonatomic) struct tagVCCellularAudioTapIORealtimeContext { long long x0; unsigned int x1; struct _VCAudioPowerSpectrumSourceRealtimeContext *x2; id x3; float x4; } *realtimeContext;

- (void)dealloc;
- (id)initWithStreamToken:(long long)a0 powerSpectrumSource:(id)a1 tapType:(unsigned int)a2;

@end
