@class RCPEventSenderProperties, NSString, RCPEventEnvironment, NSMutableArray;

@interface RCPSyntheticFluidSwipeEventStream : NSObject <RCPChildEventStream, RCPProgressEventStreamComposer> {
    NSMutableArray *_processingEventBuffer;
    unsigned int _eventType;
    unsigned short _flavor;
    unsigned short _motion;
    BOOL _hasCreatedFirstEvent;
}

@property (retain, nonatomic) RCPEventEnvironment *environment;
@property (nonatomic) double currentTimeOffset;
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double progress;
@property (nonatomic) double frequency;

- (void).cxx_destruct;
- (void)addToBuffer:(struct __IOHIDEvent { } *)a0;
- (unsigned long long)_currentMachTime;
- (void)advanceProgressByDelta:(double)a0 duration:(double)a1;
- (void)advanceTime:(double)a0;
- (id)finalizeEventStream;
- (id)initWithEventType:(unsigned int)a0 flavor:(unsigned short)a1 motion:(unsigned short)a2;
- (void)updateProgressTo:(double)a0;
- (void)updateProgressTo:(double)a0 duration:(double)a1;

@end
