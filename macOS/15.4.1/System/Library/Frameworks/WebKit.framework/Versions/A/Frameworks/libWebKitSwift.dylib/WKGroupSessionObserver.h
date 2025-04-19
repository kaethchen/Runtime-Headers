@interface WKGroupSessionObserver : NSObject {
    void /* unknown type, empty encoding */ newSessionCallback;
    void /* unknown type, empty encoding */ incomingSessionsTask;
}

@property (nonatomic, copy) id /* block */ newSessionCallback;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
