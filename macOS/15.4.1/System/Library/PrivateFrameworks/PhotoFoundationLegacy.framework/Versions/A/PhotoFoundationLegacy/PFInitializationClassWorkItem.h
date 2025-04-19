@class NSArray;

@interface PFInitializationClassWorkItem : PFInitializationWorkItem

@property (readonly) Class initializationClass;
@property (readonly) NSArray *configurationClasses;
@property struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *assignSingletonThread;
@property (retain) id singleton;

- (id)description;
- (void).cxx_destruct;
- (void)addConfigurationClass:(Class)a0;
- (id)initWithClass:(Class)a0 mainThread:(BOOL)a1;
- (void)performInitialization;

@end
