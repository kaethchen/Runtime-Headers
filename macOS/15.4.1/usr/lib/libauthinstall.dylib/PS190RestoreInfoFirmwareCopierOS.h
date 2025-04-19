@interface PS190RestoreInfoFirmwareCopierOS : PS190SoCRestoreInfoFirmwareCopierOS

@property (readonly) unsigned int boardID;
@property (readonly) unsigned int securityDomain;

- (id)firmwareKeyFromBuildIdentityDict:(id)a0 deviceInfo:(id)a1;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;

@end
