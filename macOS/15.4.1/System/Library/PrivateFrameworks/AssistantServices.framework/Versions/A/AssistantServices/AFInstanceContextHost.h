@class AFInstanceInfo;

@interface AFInstanceContextHost : AFInstanceContext {
    AFInstanceInfo *_info;
}

+ (id)effectiveMachServiceName:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)info;
- (BOOL)isCurrent;
- (BOOL)isDefault;
- (id)mediaRouteIdentifier;
- (id)audioDeviceIdentifier;
- (id)createXPCConnectionForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (id)createXPCConnectionWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (id)createXPCListenerForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (id)createXPCListenerWithMachServiceName:(id)a0;
- (id)preferencesSubdomain;
- (BOOL)supportsAudioPowerUpdate;
- (BOOL)supportsProxyGroupPlayer;
- (BOOL)supportsTelephony;

@end
