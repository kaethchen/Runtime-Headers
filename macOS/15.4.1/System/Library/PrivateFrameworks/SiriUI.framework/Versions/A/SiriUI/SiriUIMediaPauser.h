@class NSMutableSet;

@interface SiriUIMediaPauser : NSObject

@property (class, readonly) NSMutableSet *pausedClients;
@property (class) BOOL duckAudio;
@property (class) BOOL isSpeaking;
@property (class) BOOL mediaPaused;
@property (class) BOOL fanDuckingEnabled;

+ (int)_audioDevice:(unsigned int)a0 shouldDuck:(BOOL)a1;
+ (id)_fanDispatchQueue;
+ (void)pauseWithClientLoop:(BOOL)a0;
+ (void)reconcileDuckingState;

@end
