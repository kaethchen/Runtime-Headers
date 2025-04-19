@class NSObject;
@protocol SSInputEventConsumer;

@interface SSApplication : NSApplication <SSInputEventSource> {
    unsigned long long mModifierFlags;
    NSObject<SSInputEventConsumer> *mInputEventConsumer;
}

@property unsigned long long savedGestureEventMask;

- (void)dealloc;
- (id)init;
- (void)sendEvent:(id)a0;
- (id)lastUsedModifierFlags;
- (void)registerUserDefaults;
- (void)sendChangedModifierFlags:(unsigned long long)a0;
- (void)sendGestureScrollEvent:(id)a0;
- (void)ssSetInputEventConsumer:(id)a0;

@end
