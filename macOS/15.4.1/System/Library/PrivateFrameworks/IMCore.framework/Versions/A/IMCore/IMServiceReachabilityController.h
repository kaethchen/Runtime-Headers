@interface IMServiceReachabilityController : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ taskIDToTask;
}

@property (class, nonatomic, readonly) IMServiceReachabilityController *sharedController;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)calculateServiceForSendingToChat:(id)a0 completionBlock:(id /* block */)a1;
- (void)calculateServiceForSendingToHandles:(id)a0 withContext:(id)a1 completionBlock:(id /* block */)a2;
- (id)reachabilityContextForChat:(id)a0;

@end
