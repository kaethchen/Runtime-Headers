@class NSPointerArray;

@interface VCAudioRedBuilder : NSObject {
    unsigned int _sampleRate;
    unsigned int _samplesPerFrame;
    BOOL _includeSequenceOffset;
    unsigned char _historyCount;
    struct tagVCAudioRedBuilderHistory { struct tagVCAudioRedPayload { int payloadType; char *buffer; int bufferLength; unsigned int timestamp; unsigned int primaryPacketTimestamp; BOOL isRedAudio; unsigned char redCount; unsigned char sequenceOffset; unsigned char priority; } latestPayload; struct tagVCAudioRedPayload { int payloadType; char *buffer; int bufferLength; unsigned int timestamp; unsigned int primaryPacketTimestamp; BOOL isRedAudio; unsigned char redCount; unsigned char sequenceOffset; unsigned char priority; } payloadHistory[9]; unsigned int payloadHistoryCount; char *payloadBufferHistory; int payloadBufferHistoryIndex; } _history[2];
    NSPointerArray *_selectedRedPayloads;
    struct tagVCAudioRedPayload { int payloadType; char *buffer; int bufferLength; unsigned int timestamp; unsigned int primaryPacketTimestamp; BOOL isRedAudio; unsigned char redCount; unsigned char sequenceOffset; unsigned char priority; } _redPayloadToSend;
    unsigned char _redPayloadBufferToSend[1472];
    char _redPayloadDebugMessage[257];
    char _redPayloadHistoryDebugMessage[2327];
}

@property (nonatomic) unsigned int numPayloads;
@property (nonatomic) unsigned int maxDelay;
@property (readonly, nonatomic) int redPayloadType;
@property (nonatomic) unsigned int maxREDPayloadSize;

+ (unsigned int)redOverheadForNumPayloads:(unsigned int)a0;

- (void)dealloc;
- (struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; unsigned int x4; BOOL x5; unsigned char x6; unsigned char x7; unsigned char x8; } *)buildRedPayloadWithPrimaryPayload:(struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; unsigned int x4; BOOL x5; unsigned char x6; unsigned char x7; unsigned char x8; } *)a0 redPayloads:(id)a1;
- (id)initWithRedPayloadType:(int)a0 sampleRate:(unsigned int)a1 samplesPerFrame:(unsigned int)a2 numPayloads:(unsigned int)a3 maxDelay:(unsigned int)a4 includeSequenceOffset:(BOOL)a5;
- (BOOL)isPayloadTimestampWithinThreshold:(struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; unsigned int x4; BOOL x5; unsigned char x6; unsigned char x7; unsigned char x8; } *)a0 forTimestamp:(unsigned int)a1;
- (struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; unsigned int x4; BOOL x5; unsigned char x6; unsigned char x7; unsigned char x8; } *)nearestRedPayloadForTimestamp:(unsigned int)a0 payloadHistory:(struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; unsigned int x4; BOOL x5; unsigned char x6; unsigned char x7; unsigned char x8; } *)a1 payloadHistoryCount:(unsigned int)a2;
- (char *)payloadHistoryDescriptionForInfoIndex:(unsigned char)a0;
- (char *)redPayloadDescription:(struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; unsigned int x4; BOOL x5; unsigned char x6; unsigned char x7; unsigned char x8; } *)a0;
- (struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; unsigned int x4; BOOL x5; unsigned char x6; unsigned char x7; unsigned char x8; } *)redPayloadForPrimaryPayload:(struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; unsigned int x4; BOOL x5; unsigned char x6; unsigned char x7; unsigned char x8; } *)a0;
- (BOOL)redundantPayloads:(id)a0 containsPointer:(void *)a1;
- (char *)redundantPayloadsDescription:(id)a0;
- (char *)resetOutputPayload:(struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; unsigned int x4; BOOL x5; unsigned char x6; unsigned char x7; unsigned char x8; } *)a0;
- (void)resetShortREDHistoryAndPrimaryPayloadHistory:(BOOL)a0;
- (id)selectRedPayloadsForPrimaryPayload:(struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; unsigned int x4; BOOL x5; unsigned char x6; unsigned char x7; unsigned char x8; } *)a0;

@end
