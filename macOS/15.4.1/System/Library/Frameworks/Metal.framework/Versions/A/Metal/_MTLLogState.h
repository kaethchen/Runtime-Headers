@class NSString, NSMutableArray, NSMutableDictionary;
@protocol MTLBuffer, MTLResidencySet;

@interface _MTLLogState : NSObject <MTLLogState> {
    long long _logLevel;
    long long _logBufferSize;
    id<MTLBuffer> _logBuffer;
    id<MTLResidencySet> _logBufferResidencySet;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _logHandlerLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _logBufferLock;
    NSMutableArray *_handlers;
    NSMutableDictionary *defaultLoggerCache;
    NSString *metalSubsystem;
    NSString *shaderLoggingCategory;
    NSString *metalLoggingKey;
    unsigned int droppedMessages;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)convertToLogLevel:(const char *)a0;

- (void)dealloc;
- (void)addLogHandler:(id /* block */)a0;
- (BOOL)checkAndGetMessage:(struct MessageHeader { unsigned int x0; unsigned int x1; unsigned int x2; BOOL x3; BOOL x4; } *)a0 logBuffer:(struct LogBuffer { struct LogBufferHeader *x0; char *x1; } *)a1 message:(void *)a2;
- (void)decodeLog;
- (void)defaultLogHandler:(id)a0 category:(id)a1 level:(long long)a2 message:(id)a3;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 error:(id *)a2;
- (void)invokeLogHandlers:(id)a0 category:(id)a1 level:(long long)a2 message:(id)a3;
- (void)populateDefaultLoggerCache:(id)a0 subsystem:(id)a1 category:(id)a2;

@end
