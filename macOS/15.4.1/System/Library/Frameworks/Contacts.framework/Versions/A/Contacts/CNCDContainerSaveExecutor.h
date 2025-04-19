@class CNCDSaveContext;

@interface CNCDContainerSaveExecutor : NSObject

@property (readonly, nonatomic) CNCDSaveContext *saveContext;

- (void).cxx_destruct;
- (void)addContainers;
- (id)allContainerIdentifiers;
- (void)deleteContainers;
- (void)enumerateAddedContainers:(id /* block */)a0;
- (id)initWithSaveContext:(id)a0;
- (id)localContainerIdentifier;
- (void)saveContainers;
- (void)updateContainers;

@end
