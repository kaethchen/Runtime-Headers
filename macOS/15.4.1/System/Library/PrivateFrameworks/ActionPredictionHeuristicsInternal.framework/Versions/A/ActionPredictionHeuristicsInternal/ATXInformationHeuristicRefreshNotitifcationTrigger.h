@class NSString, _PASSimpleCoalescingTimer;

@interface ATXInformationHeuristicRefreshNotitifcationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    long long _notificationType;
    NSString *_notificationName;
    id _observerToken;
    double _coalescingInterval;
    _PASSimpleCoalescingTimer *_coalescingTimer;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_start;
- (void)_stop;
- (void)_triggerRefresh;
- (void)_createCoalescingTimer;
- (void)_scheduleTriggerRefresh;
- (id)initWithNotification:(id)a0 type:(long long)a1;
- (id)initWithNotification:(id)a0 type:(long long)a1 coalescingInterval:(double)a2;

@end
