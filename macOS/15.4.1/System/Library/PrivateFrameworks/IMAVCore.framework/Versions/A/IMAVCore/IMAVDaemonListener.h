@class NSMutableArray;

@interface IMAVDaemonListener : NSObject {
    NSMutableArray *_handlers;
    BOOL _postedSetupComplete;
}

@property (readonly, nonatomic) BOOL isSetupComplete;

- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)removeHandler:(id)a0;
- (void)_noteDisconnected;
- (void)addHandler:(id)a0;
- (void)setupComplete:(BOOL)a0 info:(id)a1;

@end
