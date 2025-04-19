@class NSOutputStream, NSString, NSData, NSMutableData, NSError;

@interface IASOutputStream : NSOutputStream {
    NSString *_digestAlgorithm;
    NSMutableData *_inputDigestData;
    NSMutableData *_outputDigestData;
    NSError *_streamError;
}

@property (nonatomic) BOOL isOpen;
@property (nonatomic) BOOL isClosed;
@property (nonatomic) void *inputDigestContext;
@property (nonatomic) void *outputDigestContext;
@property (nonatomic) long long bytesConsumed;
@property (nonatomic) long long bytesWritten;
@property (retain, nonatomic) NSOutputStream *destinationStream;
@property (retain, nonatomic) NSMutableData *internalDestinationData;
@property (nonatomic) unsigned long long internalDestinationBufferCapacity;
@property (nonatomic) char *internalDestinationBuffer;
@property (nonatomic) BOOL managingSourceStreamLifecycle;
@property (nonatomic, setter=setWritingToFileDescriptor:) BOOL isWritingToFileDescriptor;
@property (nonatomic) int internalDestinationFileDescriptor;
@property (copy) NSError *streamError;
@property (copy, nonatomic) NSString *digestAlgorithm;
@property (readonly, nonatomic) NSData *inputDigestData;
@property (readonly, nonatomic) NSData *outputDigestData;

+ (void)initialize;
+ (Class)outputStreamSubclassForFormat:(id)a0;
+ (BOOL)registerSubclass:(Class)a0 forFormat:(id)a1;

- (void)dealloc;
- (id)init;
- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (void)close;
- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;
- (id)initToFileAtPath:(id)a0 append:(BOOL)a1;
- (id)initToMemory;
- (id)initWithURL:(id)a0 append:(BOOL)a1;
- (void)open;
- (unsigned long long)streamStatus;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (id)initWithFileDescriptor:(int)a0;
- (id)destinationData;
- (void)setDestinationData:(id)a0;
- (void)_updateDigest:(void *)a0 withBytes:(char *)a1 length:(unsigned int)a2;
- (void)_digestClose;
- (void)_digestOpen;
- (void)_updateInputBytes:(char *)a0 length:(unsigned int)a1;
- (void)_updateOutputBytes:(char *)a0 length:(unsigned int)a1;
- (long long)_write:(const char *)a0 maxLength:(unsigned long long)a1;
- (id)initWithDestinationStream:(id)a0;
- (void)invalidateDigests;
- (void)updateInputBytes:(const char *)a0 length:(unsigned int)a1;
- (void)updateOutputBytes:(const char *)a0 length:(unsigned int)a1;

@end
