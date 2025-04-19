@class NSRecursiveLock, NWConnection, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NWConnectionManager : NSObject {
    NSObject<OS_dispatch_semaphore> *networkConnectionReadySemaphore;
    NSObject<OS_dispatch_semaphore> *sendSemaphore;
    NSObject<OS_dispatch_queue> *readDispatchQueue;
}

@property (retain) NWConnection *connection;
@property (retain) NSRecursiveLock *writeLock;
@property (readonly) NSString *stateString;
@property BOOL stopConnection;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)writeData:(const void *)a0 size:(unsigned int)a1;
- (id)initWithNWConnection:(id)a0;
- (void)startRead:(id)a0;
- (void)waitForConnection:(unsigned int)a0;

@end
