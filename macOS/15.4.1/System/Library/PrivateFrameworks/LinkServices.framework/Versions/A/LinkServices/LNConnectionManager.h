@class LNTranscriptPrivilegedProvider, NSMutableDictionary, NSString;

@interface LNConnectionManager : NSObject <LNConnectionDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableDictionary *connectionsByBundleIdentifier;
@property (readonly, nonatomic) LNTranscriptPrivilegedProvider *transcriptProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeConnection:(id)a0;
- (void)addConnection:(id)a0;
- (void)appWillResignActive:(id)a0;
- (void)connection:(id)a0 didCloseWithError:(id)a1;
- (id)connectionForEffectiveBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1 processInstanceIdentifier:(id)a2 mangledTypeName:(id)a3 userIdentity:(id)a4 error:(id *)a5;
- (void)donateActionRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidateAllConnections;
- (id)newConnectionForEffectiveBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1 processInstanceIdentifier:(id)a2 mangledTypeName:(id)a3 userIdentity:(id)a4 error:(id *)a5;

@end
