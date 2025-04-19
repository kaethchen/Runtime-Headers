@class NSTimer, NSMutableSet;

@interface NSUIHeartBeat : NSObject {
    double _currentDate;
    double _birthDate;
    double _lastDate;
    NSMutableSet *_clients;
    NSTimer *_heartBeatTimer;
    unsigned short _disableCount;
    struct { unsigned char _sessionIsActive : 1; unsigned int _reserved : 31; } _hbFlags;
}

+ (id)sharedHeartBeat;
+ (double)heartBeatCycle;
+ (BOOL)isHeartBeatThread;
+ (void)setHeartBeatCycle:(double)a0;

- (void)dealloc;
- (id)init;
- (double)_startFrameTime;
- (void)_heartBeatViews;
- (double)_currentFrameTime;
- (void)_sessionDidBecomeActive;
- (void)_sessionDidResignActive;
- (void)addHeartBeatView:(id)a0;
- (double)birthDate;
- (void)disableHeartBeating;
- (void)reenableHeartBeating:(BOOL)a0;
- (void)removeHeartBeatView:(id)a0;
- (void)updateHeartBeatState;

@end
