@class NSMutableDictionary;

@interface FSResourceManager : NSObject

@property (retain) NSMutableDictionary *resourceTasks;
@property (retain) NSMutableDictionary *resources;

- (id)init;
- (void).cxx_destruct;
- (void)addResource:(id)a0;
- (void)updateResource:(id)a0;
- (void)removeResource:(id)a0;
- (id)getResource:(id)a0;
- (void)removeTaskUUID:(id)a0;
- (void)addTaskUUID:(id)a0 resource:(id)a1;
- (int)getResourceState:(id)a0;
- (id)getResources;
- (id)getTaskUUIDs:(id)a0;

@end
