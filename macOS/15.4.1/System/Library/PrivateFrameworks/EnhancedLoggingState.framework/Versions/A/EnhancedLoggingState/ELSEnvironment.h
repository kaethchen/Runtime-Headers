@class CKContainerID;

@interface ELSEnvironment : NSObject

@property (readonly, nonatomic) unsigned long long cloudKitEnvironment;
@property (readonly, nonatomic) CKContainerID *cloudKitContainerIdentifier;

+ (id)sharedInstance;

- (long long)_containerEnvironmentForCloudKitEnvironment:(unsigned long long)a0;
- (id)_containerIdentifierForCloudKitEnvironment:(unsigned long long)a0;

@end
