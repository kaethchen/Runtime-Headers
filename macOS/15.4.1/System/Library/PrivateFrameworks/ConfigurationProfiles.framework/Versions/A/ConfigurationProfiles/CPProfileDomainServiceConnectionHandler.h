@class NSString, NSXPCConnection;

@interface CPProfileDomainServiceConnectionHandler : NSObject <CPProfileDomainServiceRequestProtocol>

@property (retain) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)hostPrivRequest:(id)a0 response:(id *)a1 error:(id *)a2;
- (void)queryServiceCapabilities:(id)a0 reply:(id /* block */)a1;
- (BOOL)hostGetPayloads:(id *)a0 forDevice:(BOOL)a1 withPayloadTypes:(id)a2 error:(id *)a3;
- (BOOL)hostGetProfiles:(id *)a0 forDevice:(BOOL)a1 error:(id *)a2;
- (BOOL)hostGetProfiles:(id *)a0 forDevice:(BOOL)a1 withPayloadTypes:(id)a2 error:(id *)a3;
- (BOOL)hostGetProfiles:(id *)a0 forDevice:(BOOL)a1 withPayloadTypes:(id)a2 ignoringProfile:(id)a3 error:(id *)a4;
- (BOOL)hostUpdateSecureSettingsForDevice:(BOOL)a0 domain:(id)a1 deltas:(id)a2 error:(id *)a3;
- (BOOL)hostWillHaveMultiplePayloadsOfType:(id)a0 afterInstallingProfile:(id)a1 existingProfile:(id)a2;
- (BOOL)hostWriteSecureSettings:(id)a0 forDevice:(BOOL)a1 domain:(id)a2 error:(id *)a3;
- (void)processRequest:(id)a0 reply:(id /* block */)a1;

@end
