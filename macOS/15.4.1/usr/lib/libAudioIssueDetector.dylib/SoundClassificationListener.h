@interface SoundClassificationListener : NSObject {
    BOOL isFalsePositiveState;
    BOOL isListenerON;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (BOOL)isFalsePositive;
- (void)startListen;
- (void)stopListen;

@end
