@class EWSSetUserOofSettingsResponseType;

@interface MFEWSSetUserOofSettingsResponseOperation : MFEWSResponseOperation

@property (retain) EWSSetUserOofSettingsResponseType *response;

- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)a0 forRequestOperation:(id)a1;

@end
