@interface TVLibraryInterfaceGlue : NSObject

@property (copy, nonatomic) id /* block */ libraryViewControllerProvider;
@property (copy, nonatomic) id /* block */ activityButtonControllerProvider;
@property (copy, nonatomic) id /* block */ downloadManagerProvider;
@property (copy, nonatomic) id /* block */ playbackEngineProvider;
@property (copy, nonatomic) id /* block */ sidebarInterfaceProvider;

+ (id)glue;

- (void).cxx_destruct;

@end
