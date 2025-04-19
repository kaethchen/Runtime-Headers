@interface LastSessionWriter : NSObject {
    BOOL _scheduled;
    BOOL _writing;
    BOOL _pending;
}

@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)scheduleWrite;
- (void)_cancelScheduledWrite;
- (void)_writeNow;
- (void)synchronousWrite;

@end
