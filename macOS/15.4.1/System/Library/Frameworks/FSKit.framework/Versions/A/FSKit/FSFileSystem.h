@class NSString, FSContainerStatus, FSModuleExtension;

@interface FSFileSystem : NSObject <FSFileSystemBase>

@property (retain) FSModuleExtension *extension;
@property (copy) FSContainerStatus *containerStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
