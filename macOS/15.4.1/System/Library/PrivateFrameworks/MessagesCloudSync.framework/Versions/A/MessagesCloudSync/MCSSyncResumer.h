@interface MCSSyncResumer : NSObject <IMUnlockMonitorListener> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ syncStateManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)systemDidUnlock;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)attemptToResumeSyncIfAppropriate;
- (void)attemptToResumeSyncOnAccountUpdateIfAppropriate;
- (void)attemptToResumeSyncOnIdentityUpdateIfAppropriate;
- (id)initWithDelegate:(id)a0 syncStateManager:(id)a1;
- (void)resumeSyncUsingKey:(id)a0;

@end
