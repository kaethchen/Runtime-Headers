@interface CSPreventSystemSleepPowerAssertion : NSObject {
    double _timeoutInterval;
    unsigned int _preventUserIdleSystemSleepAssertionId;
    unsigned int _preventSystemSleepAssertionId;
}

- (void)dealloc;
- (void)invalidate;
- (id)initWithTimeOut:(double)a0;
- (void)_acquireAssertionForType:(struct __CFString { } *)a0 withTimeout:(double)a1 assertionId:(unsigned int *)a2 details:(struct __CFString { } *)a3;
- (void)_releaseAssertionForAssertionId:(unsigned int *)a0 details:(struct __CFString { } *)a1;

@end
