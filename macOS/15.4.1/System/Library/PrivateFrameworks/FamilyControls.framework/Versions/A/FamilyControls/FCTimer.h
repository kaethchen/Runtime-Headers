@class NSTimer;

@interface FCTimer : NSObject {
    NSTimer *_timer;
    double _interval;
    id _userInfo;
    int _kind;
}

+ (id)fcTimer;

- (void)dealloc;
- (void)invalidate;
- (id)userInfo;
- (void)setUserInfo:(id)a0;
- (double)interval;
- (int)kind;
- (void)setInterval:(double)a0;
- (void)setKind:(int)a0;
- (void)fireWithTarget:(id)a0 selector:(SEL)a1;
- (BOOL)isWarning;

@end
