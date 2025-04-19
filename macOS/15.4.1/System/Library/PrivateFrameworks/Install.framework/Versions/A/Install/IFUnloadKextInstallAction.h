@interface IFUnloadKextInstallAction : IFFileInstallAction

- (id)init;
- (id)title;
- (id)errorDictionary;
- (int)requiredAuth;
- (BOOL)runWithQueueElement:(id)a0;

@end
