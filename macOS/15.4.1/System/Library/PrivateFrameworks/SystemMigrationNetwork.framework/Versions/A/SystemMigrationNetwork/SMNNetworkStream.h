@class NSSet, SMNNetworkStreamMuxer, NSString, NSObject, NSFileHandle;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SMNNetworkStream : NSObject

@property (retain) NSObject<OS_dispatch_queue> *stateQueue;
@property (weak) SMNNetworkStreamMuxer *owningMuxer;
@property (weak) SMNNetworkStream *pairedStream;
@property (retain) NSSet *supportedActionCommands;
@property (retain) NSString *name;
@property (retain) NSString *streamDescription;
@property unsigned long long mode;
@property unsigned long long rawBytesWritten;
@property unsigned long long rawBytesRead;
@property unsigned long long muxerOverheadBytes;
@property unsigned int streamID;
@property (retain) NSFileHandle *upstreamRead;
@property (retain) NSFileHandle *upstreamWrite;
@property (retain) NSFileHandle *downstreamRead;
@property (retain) NSFileHandle *downstreamWrite;
@property BOOL upstreamReadClosed;
@property BOOL upstreamWriteClosed;
@property BOOL downstreamReadClosed;
@property BOOL downstreamWriteClosed;
@property long long downstreamInputPipe;
@property long long downstreamOutputPipe;
@property long long upstreamInputPipe;
@property long long upstreamOutputPipe;
@property (retain) NSObject<OS_dispatch_source> *dispatchSource;
@property unsigned long long protocolVersion;
@property BOOL sendData;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)readDataOfLength:(unsigned long long)a0;
- (BOOL)writeData:(id)a0;
- (BOOL)writeDictionary:(id)a0 error:(id *)a1;
- (BOOL)changeMode:(unsigned long long)a0;
- (void)closeReadHandle;
- (void)_addMuxerOverheadBytes:(unsigned long long)a0;
- (void)_addRawBytesRead:(unsigned long long)a0;
- (void)_addRawBytesWritten:(unsigned long long)a0;
- (id)_initWithVersion:(unsigned long long)a0;
- (void)closeDownwardWrite;
- (void)closeDownwardWrite:(BOOL)a0;
- (void)closeUpwardRead:(BOOL)a0;
- (void)closeUpwardWrite;
- (void)closeWriteHandle;
- (int)fileDescriptorForReading;
- (int)fileDescriptorForWriting;
- (id)initWithStreamID:(unsigned int)a0 name:(id)a1 protocolVersion:(unsigned long long)a2;
- (id)initWithStreamID:(unsigned int)a0 name:(id)a1 protocolVersion:(unsigned long long)a2 directlyOnSocket:(id)a3;
- (BOOL)readDictionary:(id *)a0 error:(id *)a1 shouldDecodeClasses:(id)a2;
- (void)setReadHandleClosed;
- (void)setReadHandleClosed:(BOOL)a0;
- (void)setWriteHandleClosed;
- (void)setWriteHandleClosed:(BOOL)a0;

@end
