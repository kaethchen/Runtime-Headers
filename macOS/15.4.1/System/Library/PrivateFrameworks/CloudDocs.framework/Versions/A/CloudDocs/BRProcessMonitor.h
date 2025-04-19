@interface BRProcessMonitor : NSObject {
    id _monitor;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initForProcessID:(int)a0 observer:(id)a1;

@end
