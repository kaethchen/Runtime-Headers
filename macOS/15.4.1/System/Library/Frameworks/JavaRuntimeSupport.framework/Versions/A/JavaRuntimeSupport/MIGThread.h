@class NSConditionLock;

@interface MIGThread : NSThread

@property (nonatomic) unsigned int serverPort;
@property (retain, nonatomic) NSConditionLock *mainThreadLock;

- (void)dealloc;
- (void)main;
- (id)initWithPortToTransfer:(unsigned int)a0 transferServerPort:(unsigned int)a1 lock:(id)a2;

@end
