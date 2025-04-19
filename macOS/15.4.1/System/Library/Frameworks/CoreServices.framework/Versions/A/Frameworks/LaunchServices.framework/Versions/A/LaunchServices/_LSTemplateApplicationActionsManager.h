@class NSString, NSXPCConnection;

@interface _LSTemplateApplicationActionsManager : NSObject <LSTemplateApplicationCreationInterface> {
    NSXPCConnection *_connection;
}

@property (readonly) BOOL allowedToCreateTemplateApplication;
@property (readonly) BOOL allowedToUpdateTemplateApplication;
@property (readonly) BOOL allowedToListApplications;
@property (readonly) BOOL allowedToModifyDataVaultItems;
@property (readonly) struct { unsigned int val[8]; } auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectionToCSUI:(id)a0;
+ (id)createTemplateActionsManagerListeningConnection:(struct { unsigned int x0[8]; } *)a0 connection:(id *)a1;
+ (id)templateActionManagerForConnection:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (void)invalidate;
- (BOOL)allowedToCreateTemplateApplication;
- (BOOL)allowedToListApplications;
- (BOOL)allowedToModifyDataVaultItems;
- (BOOL)allowedToUpdateTemplateApplication;
- (void)doCreateTemplateApplication:(id)a0 displayName:(id)a1 bundleIDPrefix:(id)a2 proxyHostBundleIdentifier:(id)a3 infoPListKeys:(id)a4 arguments:(id)a5 options:(id)a6 withBlock:(id /* block */)a7;
- (void)doDeleteApplicationInformation:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;
- (void)doFinalizeTemplateApplication:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;
- (void)doGetApplicationInformation:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;
- (void)doListApplications:(id)a0 withBlock:(id /* block */)a1;
- (void)doUpdateTempateApplication:(id)a0 displayName:(id)a1 arguments:(id)a2 additionalInfoPListItems:(id)a3 options:(id)a4 withBlock:(id /* block */)a5;
- (void)doValidateTemplateApplication:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;

@end
