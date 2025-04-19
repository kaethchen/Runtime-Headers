@interface ICAccessManager : NSObject

+ (void)updateBundleIdentifierAccessingExternalMediaDevices:(id)a0 withStatus:(BOOL)a1;
+ (void)addBundleIdentifier:(id)a0;
+ (unsigned long long)bundleIdentifier:(id)a0 stateForAccessType:(unsigned long long)a1;
+ (id)bundleIdentifiersAccessingExternalMediaDevices;
+ (id)bundleIdentifiersAccessingExternalMediaDevicesWithStatus;
+ (BOOL)captureUserIntentForBundleIdentifier:(id)a0 withNotification:(id)a1;
+ (id)connection:(id)a0 stateForAccessType:(id)a1;
+ (id)internalAccessType:(unsigned long long)a0;
+ (void)revokeBundleIdentifier:(id)a0;
+ (void)updateBundleIdentifier:(id)a0 accessType:(unsigned long long)a1 withState:(unsigned long long)a2;

@end
