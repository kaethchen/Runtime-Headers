@class MCMContainerPath;

@interface MCMContainerStagingPath : MCMContainerPath

@property (retain, nonatomic) MCMContainerPath *destinationContainerPath;

+ (Class)_containerClassPathClass;
+ (id)stagingContainerPathForDestinationContainerPath:(id)a0 stagingPathIdentifier:(id)a1;

- (void).cxx_destruct;

@end
