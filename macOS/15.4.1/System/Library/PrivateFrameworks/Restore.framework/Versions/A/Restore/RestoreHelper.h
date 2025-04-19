@class NSTimer, NSMutableDictionary, NSObject;
@protocol OS_xpc_object;

@interface RestoreHelper : NSObject {
    NSTimer *_startTimer;
    void /* function */ *_statusFn;
    void /* function */ *_completionFn;
    void *_context;
    NSObject<OS_xpc_object> *_connection;
    NSMutableDictionary *_operation;
    struct AuthorizationOpaqueRef { } *_authRef;
    struct { char bytes[32]; } _authorization;
}

- (void)dealloc;
- (id)init;
- (BOOL)isAuthenticated;
- (int)updateStatus:(id)a0;
- (int)askForPassword;
- (int)authWithFlags:(unsigned int)a0;
- (int)authenticate;
- (void)asrAgentConnectionCallback:(id)a0;
- (void)commTimeout:(id)a0;
- (int)doCommand:(id)a0 withStatusFn:(void /* function */ *)a1 andContext:(void *)a2;
- (int)doCommand:(id)a0 withStatusFn:(void /* function */ *)a1 completionFn:(void /* function */ *)a2 andContext:(void *)a3;
- (void)executeCompleted:(int)a0;

@end
