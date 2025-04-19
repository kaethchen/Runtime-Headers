@class NSArray, AVAudioPCMBuffer;

@interface TTSMauiVocalizerBuffer : NSObject <NSCopying> {
    struct { int eMrkType; unsigned long long cntSrcPos; unsigned long long cntSrcTextLen; unsigned long long cntDestPos; unsigned long long cntDestLen; unsigned short usValue; unsigned int ulValue; char *szValue; } markerBuffer[32];
    unsigned long long markerCount;
}

@property (retain, nonatomic) NSArray *markers;
@property (retain, nonatomic) AVAudioPCMBuffer *audioBuffer;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)computeMarkers:(id)a0;
- (void)fillInOutDataForBuffer:(struct { int x0; unsigned long long x1; void *x2; unsigned long long x3; struct *x4; } *)a0;
- (void *)rawAudioBufferPointer;

@end
