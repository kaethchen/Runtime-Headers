@class NSString, AFClockTimer, NSUUID, NSURL, NSDate;

@interface _AFClockTimerMutation : NSObject <AFClockTimerMutating> {
    AFClockTimer *_base;
    NSUUID *_timerID;
    NSURL *_timerURL;
    BOOL _isFiring;
    NSString *_title;
    long long _state;
    double _duration;
    long long _type;
    double _fireTimeInterval;
    NSDate *_fireDate;
    NSDate *_firedDate;
    NSDate *_dismissedDate;
    NSDate *_lastModifiedDate;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasTimerID : 1; unsigned char hasTimerURL : 1; unsigned char hasIsFiring : 1; unsigned char hasTitle : 1; unsigned char hasState : 1; unsigned char hasDuration : 1; unsigned char hasType : 1; unsigned char hasFireTimeInterval : 1; unsigned char hasFireDate : 1; unsigned char hasFiredDate : 1; unsigned char hasDismissedDate : 1; unsigned char hasLastModifiedDate : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setFireDate:(id)a0;
- (void)setType:(long long)a0;
- (void)setState:(long long)a0;
- (void)setTitle:(id)a0;
- (void)setDuration:(double)a0;
- (BOOL)isDirty;
- (long long)getType;
- (double)getDuration;
- (void)setFireTimeInterval:(double)a0;
- (id)getTitle;
- (void)setLastModifiedDate:(id)a0;
- (long long)getState;
- (void)setIsFiring:(BOOL)a0;
- (id)getDismissedDate;
- (id)getFireDate;
- (double)getFireTimeInterval;
- (id)getFiredDate;
- (BOOL)getIsFiring;
- (id)getLastModifiedDate;
- (id)getTimerID;
- (id)getTimerURL;
- (id)initWithBase:(id)a0;
- (void)setDismissedDate:(id)a0;
- (void)setFiredDate:(id)a0;
- (void)setTimerID:(id)a0;
- (void)setTimerURL:(id)a0;

@end
