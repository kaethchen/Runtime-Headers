@interface IMDFileEventBroadcaster : NSObject {
    void /* unknown type, empty encoding */ fileEventStream;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)stopObserving;
- (void)observeChangesInPath:(id)a0;

@end
