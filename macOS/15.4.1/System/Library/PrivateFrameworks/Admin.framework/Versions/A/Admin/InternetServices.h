@interface InternetServices : NSObject

+ (id)sharedInternetServices;

- (BOOL)isNSCProtocolEnabled:(id)a0;
- (BOOL)remoteAEServerEnabled;
- (BOOL)screensharingEnabled;
- (BOOL)sshServerEnabled;
- (void)nscServerCancelShutdown:(id)a0 refNum:(unsigned int)a1;
- (BOOL)setInetDServiceEnabled:(id)a0 enabled:(BOOL)a1;
- (void)setSSHServerEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (struct __CFBundle { } *)_netFSServerFrameworkBundle;
- (BOOL)faxReceiveEnabled;
- (BOOL)ftpServerEnabled;
- (BOOL)httpdEnabled;
- (BOOL)isFTPServerAvailable;
- (BOOL)isFaxReceiveAvailable;
- (BOOL)isGuestForProtocolEnabled:(id)a0;
- (BOOL)isHttpdAvailable;
- (BOOL)isNSCProtocolAvailable:(id)a0;
- (BOOL)isNSServerShuttingDown:(id)a0;
- (BOOL)isOpticalDiscSharingEnabled;
- (BOOL)isRemoteAEServerAvailable;
- (BOOL)isSSHServerAvailable;
- (unsigned int)nscServerShutdown:(id)a0 withDelay:(int)a1;
- (long long)numberOfClientsForProtocols:(id)a0;
- (void)saveNatPrefs:(id)a0;
- (void)sendSIGHUPToEfax;
- (void)setFTPServerEnabled:(BOOL)a0;
- (void)setFaxReceiveEnabled:(BOOL)a0;
- (void)setGuestForProtocol:(id)a0 enabled:(BOOL)a1;
- (void)setHttpdEnabled:(BOOL)a0;
- (BOOL)setInetDServiceEnabled:(id)a0 enabled:(BOOL)a1 completion:(id /* block */)a2;
- (void)setNSCProtocols:(id)a0 enabled:(BOOL)a1;
- (void)setNSCProtocols:(id)a0 enabled:(BOOL)a1 completion:(id /* block */)a2;
- (void)setOpticalDiscSharingEnabled:(BOOL)a0;
- (void)setRemoteAEServerEnabled:(BOOL)a0;
- (void)setSSHServerEnabled:(BOOL)a0;
- (void)setScreensharingEnabled:(BOOL)a0;

@end
