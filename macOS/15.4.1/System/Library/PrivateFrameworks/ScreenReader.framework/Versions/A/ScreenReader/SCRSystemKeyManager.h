@class NSObject;
@protocol OS_dispatch_queue;

@interface SCRSystemKeyManager : NSObject {
    NSObject<OS_dispatch_queue> *_outputEventQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)_pressSystemKeyDown:(int)a0 keyUp:(int)a1;
- (void)_pressSystemKeyDown:(int)a0 keyUp:(int)a1 keyDownFlags:(unsigned int)a2 keyUpFlags:(unsigned int)a3;
- (void)decreaseSystemVolume;
- (void)increaseSystemVolume;

@end
