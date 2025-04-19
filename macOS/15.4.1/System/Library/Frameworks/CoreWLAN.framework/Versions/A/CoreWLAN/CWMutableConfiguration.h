@class NSOrderedSet;

@interface CWMutableConfiguration : CWConfiguration

@property (copy) NSOrderedSet *networkProfiles;
@property BOOL requireAdministratorForAssociation;
@property BOOL requireAdministratorForPower;
@property BOOL requireAdministratorForIBSSMode;
@property BOOL rememberJoinedNetworks;

@end
