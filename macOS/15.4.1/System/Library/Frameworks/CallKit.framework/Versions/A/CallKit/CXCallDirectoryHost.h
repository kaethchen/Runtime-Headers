@class NSString, NSObject;
@protocol OS_dispatch_queue, CXCallDirectoryHostDelegate;

@interface CXCallDirectoryHost : NSObject <CXCallDirectoryManagerDefaultHostProtocol, CXCallDirectoryManagerMaintenanceHostProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CXCallDirectoryHostDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (oneway void)cleanUpLiveLookupDataWithReply:(id /* block */)a0;
- (oneway void)refreshPIRParametersForLiveLookupExtensionWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (oneway void)synchronizeExtensionsWithReply:(id /* block */)a0;
- (BOOL)_connectionContainsCallDirectoryHostEntitlementCapability:(id)a0;
- (void)_nsExtensionWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (oneway void)compactStoreWithReply:(id /* block */)a0;
- (oneway void)fetchLiveBlockingInfoForHandle:(id)a0 reply:(id /* block */)a1;
- (oneway void)firstEnabledLiveBlockingExtensionIdentifierForPhoneNumber:(id)a0 reply:(id /* block */)a1;
- (oneway void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)a0 cacheOnly:(BOOL)a1 reply:(id /* block */)a2;
- (oneway void)getEnabledForLiveLookupExtensionWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (oneway void)getEnabledStatusForExtensionWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (oneway void)getExtensionsWithReply:(id /* block */)a0;
- (oneway void)getLastUpdatedCallDirectoryInfoWithReply:(id /* block */)a0;
- (oneway void)launchCallDirectorySettingsWithReply:(id /* block */)a0;
- (void)performDelegateCallback:(id /* block */)a0;
- (void)prepareStoreIfNecessary;
- (oneway void)refreshExtensionContextForLiveLookupExtensionWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (oneway void)reloadExtensionWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (oneway void)resetLiveLookupExtensionWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (oneway void)setEnabled:(BOOL)a0 forExtensionWithIdentifier:(id)a1 reply:(id /* block */)a2;
- (oneway void)setEnabled:(BOOL)a0 forLiveLookupExtensionWithIdentifier:(id)a1 reply:(id /* block */)a2;
- (oneway void)setPrioritizedExtensionIdentifiers:(id)a0 reply:(id /* block */)a1;

@end
