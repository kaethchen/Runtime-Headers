@class TLAlert;

@interface TLAlertActivationAssertion : NSObject {
    TLAlert *_alert;
    _Atomic long long _activeAcquisitionCount;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)relinquish;
- (void)acquire;
- (void)_acquire;
- (void)_relinquish;
- (id)initWithAlert:(id)a0;

@end
