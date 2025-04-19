@interface _LSDReadClient : _LSDClient <_LSDReadProtocol>

- (void)getApplicationCategoryIdentifiersSetWithCompletionHandler:(id /* block */)a0;
- (void)getCurrentApplicationDefaultInfoForCategory:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)getEligibilityAnswerForDomain:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)getKernelPackageExtensionsWithCompletionHandler:(id /* block */)a0;
- (void)getPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)getPreferredAppMarketplacesWithCompletion:(id /* block */)a0;
- (void)getRedactedAppexRecordForSystemAppexWithUUID:(id)a0 node:(id)a1 bundleIdentifier:(id)a2 platform:(unsigned int)a3 completionHandler:(id /* block */)a4;
- (void)getSelectedDeveloperDirectoryURLWithCompletionHandler:(id /* block */)a0;
- (void)getServerStatusWithCompletionHandler:(id /* block */)a0;
- (void)getServerStoreNonBlockingWithCompletionHandler:(id /* block */)a0;
- (void)getSessionLanguagesForImproperlyLocalizedProcessWithCompletionHandler:(id /* block */)a0;
- (void)getSettingsStoreConfigurationWithCompletionHandler:(id /* block */)a0;
- (void)getSystemContentStoreWithCompletionHandler:(id /* block */)a0;
- (void)getSystemModeWithCompletionHandler:(id /* block */)a0;
- (void)invokeServiceInvocation:(id)a0 isReply:(BOOL)a1;
- (void)mapBundleIdentifiers:(id)a0 orMachOUUIDs:(id)a1 completionHandler:(id /* block */)a2;
- (void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)willHandleInvocation:(id)a0 isReply:(BOOL)a1;

@end
