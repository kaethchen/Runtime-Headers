@class PLLibraryServicesManager;

@interface PLAbstractLibraryServicesManagerService : NSObject

@property (readonly, nonatomic) PLLibraryServicesManager *libraryServicesManager;

- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)a0;
- (id)newShortLivedLibraryWithName:(const char *)a0;

@end
