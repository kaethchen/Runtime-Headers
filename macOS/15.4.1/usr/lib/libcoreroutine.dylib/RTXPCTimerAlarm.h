@class NSObject, NSString, NSDate;
@protocol OS_dispatch_queue;

@interface RTXPCTimerAlarm : NSObject

@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (BOOL)invalidate;
- (void)_invalidate;
- (void)_setup;
- (void)onNotification:(id)a0;
- (void)_deregisterAlarm;
- (void)_fireWithDate:(id)a0;
- (void)_handleDurationExpiry;
- (BOOL)_isEndDateValid:(id)a0;
- (void)_onNotification:(id)a0;
- (void)_resetState;
- (void)_setAlarmWithEndDate:(id)a0 userVisible:(BOOL)a1;
- (BOOL)fireWithDate:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)setup;

@end
