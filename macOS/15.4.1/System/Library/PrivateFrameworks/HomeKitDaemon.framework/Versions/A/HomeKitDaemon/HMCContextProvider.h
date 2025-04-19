@class NSMutableArray, HMCContext;

@interface HMCContextProvider : HMFObject

@property (readonly) NSMutableArray *redirections;
@property (readonly) HMCContext *context;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)performBlock:(id /* block */)a0;
- (id)futureInContext:(id /* block */)a0;
- (void)registerForChangesOfDatabaseModels:(id)a0 orWithModelIDs:(id)a1 changeMask:(unsigned long long)a2 selector:(SEL)a3;
- (void)removeAllRegistrations;
- (void)unsafeSynchronousBlock:(id /* block */)a0;

@end
