@class PLLibraryServicesManager, NSString;

@interface PLAnalysisCoordinatorStep : NSObject

@property (readonly, nonatomic) PLLibraryServicesManager *libraryServicesManager;
@property (readonly, nonatomic) NSString *parentTaskID;

- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)a0 parentTaskID:(id)a1;

@end
