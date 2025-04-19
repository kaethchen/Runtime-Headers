@interface _SWCollaborationServiceSource : _SWBaseCollaborationSource <_SWCollaborationService>

- (id)serviceName;
- (id)interface;
- (id)requiredEntitlement;
- (void)collaborationMetadataWithCompletionHandler:(id /* block */)a0;

@end
