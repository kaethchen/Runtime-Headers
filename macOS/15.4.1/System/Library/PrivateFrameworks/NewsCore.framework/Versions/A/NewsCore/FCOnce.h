@class NFUnfairLock;

@interface FCOnce : NSObject {
    BOOL _finished;
    NFUnfairLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (BOOL)trigger;
- (void)executeOnce:(id /* block */)a0;
- (BOOL)hasBeenTriggered;

@end
