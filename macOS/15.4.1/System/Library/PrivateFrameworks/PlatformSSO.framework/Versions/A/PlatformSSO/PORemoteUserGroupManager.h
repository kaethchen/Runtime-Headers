@class POConfigurationVersion, NSArray, PODaemonConnection, PODeviceConfiguration;

@interface PORemoteUserGroupManager : NSObject {
    PODaemonConnection *_serviceConnection;
}

@property (retain) POConfigurationVersion *deviceConfigurationVersion;
@property (retain) NSArray *cachedUsers;
@property (getter=hasUsersChanged) BOOL usersChanged;
@property (readonly) PODeviceConfiguration *currentDeviceConfiguration;
@property (readonly) PODeviceConfiguration *deviceConfiguration;

- (void).cxx_destruct;
- (BOOL)removeUserWithName:(id)a0;
- (id)getAllUsers;
- (id)createOrUpdateUser:(id)a0;
- (id)findUser:(id)a0;
- (id)initWithConfiguationVersion:(id)a0;

@end
