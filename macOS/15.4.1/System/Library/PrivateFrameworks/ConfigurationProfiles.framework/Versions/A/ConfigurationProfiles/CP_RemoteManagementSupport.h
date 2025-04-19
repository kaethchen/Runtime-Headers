@class ADMARDConfig;

@interface CP_RemoteManagementSupport : NSObject {
    ADMARDConfig *_ardConfig;
}

- (void)dealloc;
- (id)init;
- (id)ardConfig;
- (id)disableRemoteManagement;
- (id)enableRemoteManagement;
- (id)enableRemoteManagement:(BOOL)a0 withPrivileges:(int)a1;
- (int)getCurrentAllUsersRMPrivs;
- (BOOL)isARDActive;
- (BOOL)isAllUsers;
- (BOOL)isScreenShareActive;
- (void)setCurrentAllUsersRMPrivs:(int)a0;

@end
