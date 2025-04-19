@class NSArray, NSString, NSMutableArray, NSWindow;
@protocol KHProjectLifecycleControllerDelegate;

@interface KHProjectLifecycleController : NSObject {
    NSMutableArray *_resourcePrepOperations;
}

@property (retain, nonatomic) NSWindow *targetWindow;
@property (retain, nonatomic) NSArray *resourcePreparationOperations;
@property (copy, nonatomic) NSString *initialMessage;
@property (nonatomic) id<KHProjectLifecycleControllerDelegate> delegate;
@property (nonatomic) double delayToOpenProgressModal;

+ (void)createProjectWithInfo:(id)a0 modalForWindow:(id)a1 completion:(id /* block */)a2;
+ (void)modifyProject:(id)a0 resourcePreparationOperations:(id)a1 themeProviderConfig:(id)a2 modalForWindow:(id)a3 completion:(id /* block */)a4;
+ (void)openProjectBundle:(id)a0 resourcePreparationOperations:(id)a1 modalForWindow:(id)a2 completion:(id /* block */)a3;

- (id)init;
- (void).cxx_destruct;
- (void)executeWithCompletionBlock:(id /* block */)a0;
- (void)_openDialogsModalForWindow:(id)a0 resourcePreparationOperations:(id)a1 delayBeforeOpen:(double)a2 completion:(id /* block */)a3;
- (void)addResourceHydrationOperation:(id)a0;
- (void)removeResourceHydrationOperation:(id)a0;

@end
