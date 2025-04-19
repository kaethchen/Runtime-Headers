@class NSString, BMStoreStream;

@interface BMPruner : NSObject {
    BMStoreStream *_storeStream;
    NSString *_remote;
}

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)deleteEventsPassingTest:(id /* block */)a0;
- (void)deleteWithPolicy:(id)a0 eventsPassingTest:(id /* block */)a1;
- (BOOL)deleteStoreEvent:(id)a0;
- (id)initWithStoreStream:(id)a0 remote:(id)a1;

@end
