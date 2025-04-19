@class NSString, FSContainerStatus, FSModuleExtension;

@interface FSUnaryFileSystem : NSObject <FSFileSystemBaseProjectProtocol, FSFileSystemBase>

@property (retain) FSModuleExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) FSModuleExtension *extension;
@property (copy) FSContainerStatus *containerStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)wipeResource:(id)a0 completionHandler:(id /* block */)a1;
- (void)wipeResource:(id)a0 includingRanges:(id)a1 excludingRanges:(id)a2 replyHandler:(id /* block */)a3;

@end
