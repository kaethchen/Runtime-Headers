@class NSString;

@interface LACClientInfoProvider : NSObject <LACClientInfoProviding>

@property (class, readonly, nonatomic) LACClientInfoProvider *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isNonUiExtensionPointIdentifier:(id)a0;
- (BOOL)canCallToDependencies;
- (id)infoForXPCClient:(id)a0 evaluationOptions:(id)a1;
- (id)_infoForClientWithApplicationIdentityData:(id)a0;
- (id)_infoForClientWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)_infoForClientWithAuditTokenData:(id)a0;
- (id)applicationIdentityDataForProcessId:(int)a0;
- (id)auditTokenDataForProcessId:(int)a0;
- (id)infoForXPCClient:(id)a0;
- (BOOL)processId:(int)a0 toAuditToken:(struct { unsigned int x0[8]; } *)a1;
- (int)processIdForAuditToken:(struct { unsigned int x0[8]; })a0;

@end
