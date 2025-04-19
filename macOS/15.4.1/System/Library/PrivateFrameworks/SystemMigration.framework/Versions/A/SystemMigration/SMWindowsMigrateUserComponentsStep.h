@interface SMWindowsMigrateUserComponentsStep : SMWindowsMigrateComponentStep

- (id)process;
- (id)prepare;
- (void)copierSuceeded:(id)a0;
- (void)copierStarted:(id)a0;

@end
