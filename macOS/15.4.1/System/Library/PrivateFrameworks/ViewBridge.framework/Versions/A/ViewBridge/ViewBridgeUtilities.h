@interface ViewBridgeUtilities : NSObject

+ (id)appearanceNamed:(id)a0;
+ (void)allowSettingMousePointerImageInBackground:(BOOL)a0 whilePerformingActions:(id /* block */)a1;
+ (id)appearanceWithData:(id)a0;
+ (void)builtForPlatform:(unsigned int)a0 againstMinimumSDK:(unsigned int)a1 reply:(id /* block */)a2;
+ (id)concreteColorWithColor:(id)a0 fromAppearance:(id)a1;
+ (id)concreteColorWithColorFromCurrentAppearance:(id)a0;
+ (id)copyDeferredBlockQueue;
+ (id)createIdentifier;
+ (id)dataWithAppearance:(id)a0;
+ (id)decodeIdentifier:(id)a0;
+ (id)describeAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)describeEventMask:(unsigned int)a0;
+ (BOOL)flushCoreAnimationTransaction;
+ (id)hostAppClientParametersClasses;
+ (BOOL)hostAppIsActive:(BOOL)a0;
+ (id)informationStringForKey:(struct __CFString { } *)a0 forApplication:(struct __LSASN { } *)a1;
+ (id)informationStringForKey:(struct __CFString { } *)a0 forProcess:(int)a1;
+ (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })minMaxFrameSizeFromConstraintsOfWindow:(id)a0;
+ (void)pushAbortModalSessionEvent;
+ (void)removeResponder:(id)a0 fromChainOf:(id)a1;
+ (void)setApplication:(struct __LSASN { } *)a0 value:(void *)a1 forKey:(struct __CFString { } *)a2;
+ (void)setCurrentApplicationValue:(void *)a0 forKey:(struct __CFString { } *)a1;
+ (void)whileHoldingLock:(struct os_unfair_lock_s { unsigned int x0; } *)a0 perform:(id /* block */)a1;
+ (void)withThreadName:(id)a0 performActions:(id /* block */)a1;

@end
