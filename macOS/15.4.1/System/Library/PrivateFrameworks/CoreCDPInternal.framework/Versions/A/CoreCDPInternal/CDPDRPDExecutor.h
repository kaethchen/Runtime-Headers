@class NSError;

@interface CDPDRPDExecutor : NSObject {
    void /* unknown type, empty encoding */ ledger;
    void /* unknown type, empty encoding */ sbDeleter;
    void /* unknown type, empty encoding */ circleControl;
    void /* unknown type, empty encoding */ cdpContext;
    void /* unknown type, empty encoding */ edpController;
    void /* unknown type, empty encoding */ isICDPEnabled;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithSbDeleter:(id)a0 ledger:(id)a1 circleControl:(id)a2 cdpContext:(id)a3 edpController:(id)a4 isICDPEnabled:(BOOL)a5;
- (void)performRPDWithCompletionHandler:(void (^)(unsigned long long, NSError *))a0;

@end
