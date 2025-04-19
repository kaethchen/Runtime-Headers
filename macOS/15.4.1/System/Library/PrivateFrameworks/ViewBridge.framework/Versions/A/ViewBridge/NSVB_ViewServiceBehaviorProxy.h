@class NSString, NSVB_ViewServiceFencingControlProxy;

@interface NSVB_ViewServiceBehaviorProxy : NSVB_TargetedProxy <NSVB_ViewServiceUIBehaviorInterface> {
    NSVB_ViewServiceFencingControlProxy *_fencingControlProxy;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
}

@property (readonly) unsigned int scope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activeFencePort;
+ (id)proxyWrappingExportedObject:(id)a0 forCommunicationAtScope:(unsigned int)a1 withServiceMarshal:(id)a2 exportedProtocol:(id)a3;

- (oneway void)release;
- (void)dealloc;
- (id)retain;
- (void)__vbSuperRelease;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;

@end
