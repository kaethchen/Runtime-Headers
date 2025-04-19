@class NSObject, NSMutableDictionary, NSFileHandle;
@protocol SMNStreamMuxerDelegate, OS_dispatch_source, OS_dispatch_queue, SMNNetworkSecurityProvider;

@interface SMNNetworkStreamMuxer : NSObject {
    char *upBuffer;
    char *downBuffer;
}

@property (retain) NSFileHandle *socketFileHandle;
@property unsigned long long protocolVersion;
@property (retain) NSObject<OS_dispatch_queue> *listAccessQueue;
@property (retain) NSMutableDictionary *downStreamsByID;
@property (retain) NSMutableDictionary *upStreamsByID;
@property unsigned int streamIDMin;
@property unsigned int streamIDMax;
@property unsigned int streamIDNext;
@property (retain) NSObject<OS_dispatch_queue> *incomingDataQueue;
@property (retain) NSObject<OS_dispatch_source> *upSource;
@property (retain) NSObject<OS_dispatch_queue> *outgoingDataQueue;
@property long long upBufferSize;
@property long long downBufferSize;
@property BOOL interrupted;
@property (weak) id<SMNStreamMuxerDelegate> delegate;
@property (retain) id<SMNNetworkSecurityProvider> securityProvider;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)closeStream:(id)a0;
- (void)removeStream:(id)a0;
- (BOOL)_doMuxerInitializationAsMaster:(BOOL)a0;
- (BOOL)_read:(int)a0 buffer:(void *)a1 bufferSize:(unsigned long long)a2 useSecurityProvider:(BOOL)a3 usingFailureHandler:(id /* block */)a4;
- (BOOL)_readFromMuxerFd:(void *)a0 bufferSize:(unsigned long long)a1 usingFailureHandler:(id /* block */)a2;
- (BOOL)_readFromPipe:(int)a0 buffer:(void *)a1 bufferSize:(unsigned long long)a2 usingFailureHandler:(id /* block */)a3;
- (void)_selfDestruct;
- (BOOL)_write:(int)a0 buffer:(void *)a1 bufferSize:(unsigned long long)a2 useSecurityProvider:(BOOL)a3 usingFailureHandler:(id /* block */)a4;
- (BOOL)_writeToMuxerFd:(void *)a0 bufferSize:(unsigned long long)a1 usingFailureHandler:(id /* block */)a2;
- (BOOL)_writeToPipe:(int)a0 buffer:(void *)a1 bufferSize:(unsigned long long)a2 usingFailureHandler:(id /* block */)a3;
- (void)closeStream:(id)a0 initiatedLocally:(BOOL)a1;
- (id)createNewStreamFromIncomingID:(unsigned int)a0;
- (id)createNewStreamFromIncomingID:(unsigned int)a0 withName:(id)a1;
- (id)getStreamWithID:(id)a0 isDownward:(BOOL *)a1;
- (id)initWithSocketFileHandle:(id)a0 baseQueueName:(id)a1 andProtocolVersion:(unsigned long long)a2;
- (id)newStreamPairedWithStream:(id)a0;
- (id)newStreamWithName:(id)a0;
- (char)nextChunkHeaderForStream:(unsigned int *)a0 ofSize:(unsigned int *)a1;
- (void)readIncomingData;
- (BOOL)sendCommand:(char)a0 onStream:(unsigned int)a1 withSize:(unsigned int)a2;
- (void)sendOutgoingData:(id)a0 fileHandle:(id)a1;
- (BOOL)startAsMaster:(BOOL)a0;

@end
