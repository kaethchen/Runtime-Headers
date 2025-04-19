@interface ATXLocationManagerStateStoreOnDiskEnv : NSObject <ATXLocationManagerStateStoreOnDiskEnv> {
    id _stateChangeRegistration;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isLocked;
- (void)callOnNextUnlock:(id /* block */)a0;
- (int)openFileAtPath:(id)a0 dataProtectionClass:(int)a1;

@end
