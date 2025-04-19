@class NSString, NSDictionary, NSMutableDictionary, FigWeakReference;
@protocol BWFigCaptureStreamStartStopDelegate;

@interface BWFigCaptureStream : NSObject {
    struct OpaqueFigCaptureStream { } *_stream;
    BOOL _staticPropertiesCacheEnabled;
    NSString *_portTypeShortString;
    NSMutableDictionary *_cachedProperties;
    BOOL _invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _ktraceCodePrefix;
    BOOL _createFakeISPMotionData;
    FigWeakReference *_startStopDelegateWeakReference;
    NSString *_loggingPrefix;
    BOOL _vibeMitigationEnabled;
    BOOL _vibeMitigationWhileCameraStreamingSupported;
    BOOL _workaroundShouldTurnOnTorchWhenNextStreamStarts;
}

@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSDictionary *supportedProperties;
@property (weak, nonatomic) id<BWFigCaptureStreamStartStopDelegate> startStopDelegate;
@property (nonatomic) BOOL calibrationDataSent;
@property (copy, nonatomic) id /* block */ reactionsInProgressChangedHandler;
@property (copy, nonatomic) id /* block */ suppressedGestureHandler;
@property (nonatomic) BOOL vibeMitigationEnabled;
@property (nonatomic) BOOL workaroundToTurnTorchOnWhenStreamStartsIfNecessary;
@property (readonly, nonatomic) BOOL streaming;

+ (void)initialize;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)invalidate;
- (int)start;
- (int)stop;
- (void)synchronizedStreamsGroupDidStop;
- (int)addAttachmentsToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 options:(id)a1;
- (id)copyProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (id)copyPropertyIfSupported:(struct __CFString { } *)a0 error:(int *)a1;
- (int)enqueueReactionEffect:(id)a0;
- (void)flushPropertyCache;
- (id)getProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (id)getPropertyIfSupported:(struct __CFString { } *)a0 error:(int *)a1;
- (id)initWithFigCaptureStream:(struct OpaqueFigCaptureStream { } *)a0 deviceID:(id)a1 errOut:(int *)a2;
- (int)registerForNotification:(struct __CFString { } *)a0 listener:(const void *)a1 callback:(void /* function */ *)a2;
- (int)sendCommandProperty:(struct __CFString { } *)a0;
- (int)setProperty:(struct __CFString { } *)a0 value:(id)a1;
- (int)setPropertyIfSupported:(struct __CFString { } *)a0 value:(id)a1;
- (void)synchronizedStreamsGroupWillStop;
- (int)unregisterForNotification:(struct __CFString { } *)a0 listener:(const void *)a1;

@end
