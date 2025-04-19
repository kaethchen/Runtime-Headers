@class NSString;
@protocol NSXPCProxyCreating;

@interface WBSCloudHistoryServiceProxy : NSObject <WBSCloudHistoryServiceProtocol> {
    id<NSXPCProxyCreating> _proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProxy:(id)a0;
- (void)updateConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (id /* block */)_defaultProxyErrorHandlerWithSimpleReplyHandler:(id /* block */)a0;
- (void)fetchAndMergeChangesBypassingThrottler:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)fetchDateOfNextPermittedSaveChangesAttemptWithCompletionHandler:(id /* block */)a0;
- (void)resetForAccountChangeWithCompletionHandler:(id /* block */)a0;
- (void)saveChangesBypassingThrottler:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateProfileLocalIdentifiersToServerIdentifiersMap:(id)a0 completionHandler:(id /* block */)a1;

@end
