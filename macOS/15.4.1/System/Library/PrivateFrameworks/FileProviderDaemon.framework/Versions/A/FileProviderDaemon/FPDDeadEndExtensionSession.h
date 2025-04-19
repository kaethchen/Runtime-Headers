@class NSString, NSError;

@interface FPDDeadEndExtensionSession : NSObject <FPDExtensionSessionProtocol> {
    NSError *_error;
}

@property (readonly, nonatomic) BOOL hasFileProviderAttributionMDMAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithError:(id)a0;
- (void)start;
- (void)dumpStateTo:(id)a0;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)a0;
- (void)cancelAsync;
- (id)existingFileProviderProxyWithTimeout:(double)a0 onlyAlreadyLifetimeExtended:(BOOL)a1 pid:(int)a2;
- (id)newFileProviderProxyWithTimeout:(double)a0 pid:(int)a1;
- (void)registerLifetimeExtensionForObject:(id)a0;
- (void)terminateWithReason:(id)a0;
- (void)unregisterLifetimeExtensionForObject:(id)a0;

@end
