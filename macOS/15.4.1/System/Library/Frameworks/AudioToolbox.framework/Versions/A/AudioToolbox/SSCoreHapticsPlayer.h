@class CHHapticEngine;

@interface SSCoreHapticsPlayer : NSObject

@property (readonly) CHHapticEngine *engine;
@property (readonly) unsigned long long ssid;

- (id)init;
- (void).cxx_destruct;
- (void)stop:(BOOL)a0;
- (void)prewarm:(BOOL)a0;
- (id)initWithAudio:(id)a0 haptic:(id)a1 error:(id *)a2;
- (id)initWithAudio:(id)a0 hapticDictionary:(id)a1 error:(id *)a2;
- (BOOL)playWithOptions:(id)a0 completionCallbackToken:(unsigned int)a1 error:(id *)a2;

@end
