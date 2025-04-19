@protocol NFLocking;

@interface FCMTWriterLock : NSObject <NFLocking> {
    id<NFLocking> _underlyingLock;
}

- (id)init;
- (void).cxx_destruct;
- (void)lock;
- (void)unlock;
- (id)initWithUnderlyingLock:(id)a0;
- (void)performReadSync:(id /* block */)a0;
- (void)performWriteSync:(id /* block */)a0;
- (BOOL)readBool:(id /* block */)a0;
- (id)readObject:(id /* block */)a0;

@end
