@interface FSKitDiskArbHelper : NSObject

+ (int)DAMountFSKitVolume:(id)a0 deviceName:(id)a1 mountPoint:(id)a2 volumeName:(id)a3 mountOptions:(id)a4;
+ (int)DAMountUserFSVolume:(id)a0 deviceName:(id)a1 mountPoint:(id)a2 volumeName:(id)a3 mountOptions:(id)a4;
+ (int)DAMountUserFSVolume:(id)a0 deviceName:(id)a1 mountPoint:(id)a2 volumeName:(id)a3 auditToken:(struct { unsigned int x0[8]; })a4 mountOptions:(id)a5;
+ (id)getFileProviderID;
+ (id)waitForPreviousTasksToComplete:(id)a0 client:(id)a1;

@end
