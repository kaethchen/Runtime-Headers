@class NSString, NSMutableDictionary, _ML3DatabaseConnectionSubPool, NSUUID, NSObject;
@protocol ML3DatabaseConnectionPoolDelegate, OS_dispatch_queue;

@interface ML3DatabaseConnectionPool : NSObject {
    _ML3DatabaseConnectionSubPool *_readersSubPool;
    _ML3DatabaseConnectionSubPool *_writersSubPool;
    NSMutableDictionary *_identifiersConnectionsMap;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSUUID *_poolStorageKey;
    BOOL _useDistantWriterConnections;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _poolLockCondition;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _poolLockMutex;
}

@property (nonatomic, getter=isClosed) BOOL closed;
@property (readonly, nonatomic) NSString *databasePath;
@property (weak, nonatomic) id<ML3DatabaseConnectionPoolDelegate> delegate;
@property (readonly, nonatomic) unsigned long long maxReaders;
@property (readonly, nonatomic) unsigned long long maxWriters;
@property (nonatomic) unsigned long long connectionsJournalingMode;
@property (nonatomic) BOOL useDistantWriterConnections;
@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (readonly, nonatomic) BOOL isCurrentThreadConnectionInTransaction;

- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)lock;
- (void)unlock;
- (BOOL)ownsConnection:(id)a0;
- (void)_closeAllConnectionsAndWaitForBusyConnections:(BOOL)a0;
- (id)_connectionForIdentifier:(id)a0;
- (id)_connectionForWriting:(BOOL)a0 useThreadConnection:(BOOL)a1 storeThreadLocalConnection:(BOOL)a2;
- (id)_generateDiagnostic;
- (id)_localConnectionForThread:(id)a0;
- (void)_setConnection:(id)a0 forIdentifier:(id)a1;
- (void)_setLocalConnection:(id)a0 forThread:(id)a1;
- (void)checkInConnection:(id)a0;
- (void)closeAllConnections;
- (id)initWithDatabasePath:(id)a0 maxReaders:(unsigned long long)a1;
- (id)initWithDatabasePath:(id)a0 maxReaders:(unsigned long long)a1 maxWriters:(unsigned long long)a2;
- (BOOL)isClosedWithNoActiveOrBusyConnections;
- (void)lockAndCloseAllConnectionsForTermination;
- (id)readerConnection;
- (id)writerConnection;

@end
