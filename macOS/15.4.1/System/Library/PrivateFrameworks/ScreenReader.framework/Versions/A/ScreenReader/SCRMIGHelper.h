@class NSThread;

@interface SCRMIGHelper : NSObject {
    struct __CFRunLoop { } *_migMessageHandlingRunLoop;
    struct __CFRunLoopSource { } *_SCRQuitDefsServerSource;
    struct __CFRunLoopSource { } *_SCRStartDefsServerSource;
}

@property (retain, nonatomic, setter=_setMIGMessageHandlingThread:) NSThread *_migMessageHandlingThread;
@property (nonatomic, setter=_setStartupPort:) unsigned int _startupPort;
@property (nonatomic, setter=_setRunningPort:) unsigned int _runningPort;

- (void).cxx_destruct;
- (void)stop;
- (void)_mht_main;
- (void)_mht_stop;
- (id)initWithStartupPort:(unsigned int)a0 runningPort:(unsigned int)a1;

@end
