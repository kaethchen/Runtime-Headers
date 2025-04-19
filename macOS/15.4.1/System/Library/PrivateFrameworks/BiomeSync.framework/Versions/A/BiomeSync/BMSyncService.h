@interface BMSyncService : NSObject <BMSyncServiceClientProtocol>

- (id)connection;
- (BOOL)triggerSyncWithError:(id *)a0;
- (id)remoteDevicesForAccount:(id)a0 error:(id *)a1;
- (id)remoteDevicesWithError:(id *)a0;
- (id)cascadeRapportSyncWithErrors:(id *)a0;
- (id)cloudKitSyncWithErrors:(id *)a0;
- (id)peerInformationWithError:(id *)a0;
- (id)rapportSyncWithErrors:(id *)a0;
- (void)remoteDevicesForAccount:(id)a0 reply:(id /* block */)a1;
- (void)remoteDevicesWithReply:(id /* block */)a0;
- (BOOL)triggerCloudKitSyncWithError:(id *)a0;
- (void)triggerCloudKitSyncWithReply:(id /* block */)a0;
- (BOOL)triggerRapportSyncWithDeviceIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)triggerRapportSyncWithError:(id *)a0;
- (void)triggerRapportSyncWithReply:(id /* block */)a0;

@end
