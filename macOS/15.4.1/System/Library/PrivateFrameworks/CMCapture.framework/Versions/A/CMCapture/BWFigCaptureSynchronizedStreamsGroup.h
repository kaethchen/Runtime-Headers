@class NSArray, NSDictionary, BWFigCaptureStreamsMapper, BWFigCaptureStream;

@interface BWFigCaptureSynchronizedStreamsGroup : NSObject {
    struct OpaqueFigCaptureSynchronizedStreamsGroup { } *_syncGroup;
    BOOL _invalidated;
    BWFigCaptureStreamsMapper *_streamsMapper;
    NSArray *_activeStreams;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _ktraceCodePrefix;
}

@property (readonly) NSDictionary *supportedProperties;
@property (readonly) NSArray *streams;
@property (readonly) BWFigCaptureStream *synchronizationMaster;
@property (readonly) BOOL stopSupported;

+ (void)initialize;

- (void)dealloc;
- (void)invalidate;
- (int)stop;
- (id)activeStreams;
- (id)copyProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (id)getProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (id)initWithFigCaptureSynchronizedStreamsGroup:(struct OpaqueFigCaptureSynchronizedStreamsGroup { } *)a0 bwFigCaptureStreams:(id)a1 figCaptureStreams:(id)a2;
- (int)setActiveStreams:(id)a0;
- (int)setCameraControlsMasterStream:(id)a0;
- (int)setMasterStream:(id)a0 slaveConfigurationsByPortType:(id)a1;
- (int)setProperty:(struct __CFString { } *)a0 value:(id)a1;

@end
