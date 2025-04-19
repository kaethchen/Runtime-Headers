@interface TextInputUI.TUINetworkObserver : NSObject {
    void /* unknown type, empty encoding */ monitor;
    void /* unknown type, empty encoding */ networkMonitorQueue;
    void /* unknown type, empty encoding */ callbackQueue;
    void /* unknown type, empty encoding */ currentStatus;
    void /* unknown type, empty encoding */ pendingCompletions;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (void)isNetworkAvailableWithCompletion:(id /* block */)a0;

@end
