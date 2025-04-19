@interface BCBrtMonitor : NSObject {
    id /* block */ _cancel;
}

- (void)dealloc;
- (id)init;
- (void)cancel;
- (void)setCancelHandler:(id /* block */)a0;

@end
