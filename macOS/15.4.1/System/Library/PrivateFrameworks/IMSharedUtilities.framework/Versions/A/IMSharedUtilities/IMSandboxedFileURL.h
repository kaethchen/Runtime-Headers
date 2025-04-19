@interface IMSandboxedFileURL : IMSandboxedResource

+ (Class)resourceClass;

- (id)initWithFileURL:(id)a0;
- (char *)_sandboxExtensionForAuditToken:(struct { unsigned int x0[8]; })a0;
- (char *)_sandboxExtensionForPID:(int)a0;
- (id)initWithFileURL:(id)a0 destinationProcessPID:(int)a1;

@end
