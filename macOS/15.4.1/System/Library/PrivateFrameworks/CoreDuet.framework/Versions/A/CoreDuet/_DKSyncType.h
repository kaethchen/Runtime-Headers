@class NSObject;
@protocol OS_xpc_object;

@interface _DKSyncType : NSObject <NSSecureCoding> {
    BOOL _isSingleDevice;
    BOOL _forceSync;
    BOOL _isInitialSync;
    BOOL _isPeriodicSync;
    BOOL _isTriggeredSync;
    BOOL _didActivatePeer;
    BOOL _didReceivePush;
    BOOL _didAddSyncedEvents;
    BOOL _didDeleteSyncedEvents;
    unsigned long long _urgency;
    double _periodicSyncInterval;
    NSObject<OS_xpc_object> *_xpcActivity;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
