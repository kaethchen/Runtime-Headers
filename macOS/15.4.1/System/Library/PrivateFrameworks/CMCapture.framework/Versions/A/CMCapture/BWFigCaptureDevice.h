@class NSString, NSDictionary, NSArray, BWFigCaptureStreamsMapper, NSMutableArray;

@interface BWFigCaptureDevice : NSObject <BWFigCaptureISPProcessingSessionDelegate> {
    struct OpaqueFigCaptureDevice { } *_device;
    NSDictionary *_streamsByPortType;
    BWFigCaptureStreamsMapper *_streamsMapper;
    NSArray *_figCaptureSynchronizedStreamsGroups;
    NSMutableArray *_activeProcessingSessions;
    BOOL _invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _ktraceCodePrefix;
    NSString *_loggingPrefix;
}

@property (readonly) long long uniqueID;
@property (readonly) NSString *deviceID;
@property (readonly) NSDictionary *supportedProperties;
@property (readonly) NSArray *streams;
@property (readonly) NSArray *synchronizedStreamsGroups;
@property (readonly) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)invalidate;
- (id)copyStreamsWithPortTypes:(id)a0 error:(int *)a1;
- (id)copyISPProcessingSessionWithType:(int)a0 error:(int *)a1;
- (id)copyProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (id)copyPropertyIfSupported:(struct __CFString { } *)a0 error:(int *)a1;
- (id)copyStreamWithPortType:(struct __CFString { } *)a0 error:(int *)a1;
- (id)copySynchronizedStreamsGroupForStreams:(id)a0 error:(int *)a1;
- (int)enqueueReactionEffect:(id)a0;
- (id)getProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (id)getPropertyIfSupported:(struct __CFString { } *)a0 error:(int *)a1;
- (id)initWithFigCaptureDevice:(struct OpaqueFigCaptureDevice { } *)a0 deviceID:(id)a1;
- (void)invalidateAndKeepFigCaptureDeviceAlive:(BOOL)a0 streamsToRelinquishControl:(id)a1;
- (void)processingSessionHasBeenInvalidated:(id)a0;
- (int)relinquishControlOfStreams:(id)a0;
- (int)requestControlOfStreams:(id)a0 clientPriority:(int)a1;
- (void)resetSynchronizedStreamsGroups;
- (int)setProperty:(struct __CFString { } *)a0 value:(id)a1;
- (int)setPropertyIfSupported:(struct __CFString { } *)a0 value:(id)a1;

@end
