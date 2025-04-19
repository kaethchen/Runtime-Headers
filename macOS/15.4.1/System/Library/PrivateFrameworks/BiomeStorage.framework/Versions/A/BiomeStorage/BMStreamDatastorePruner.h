@class BMStreamDatastore;
@protocol BMStreamDatastorePruningDelegate;

@interface BMStreamDatastorePruner : NSObject {
    BMStreamDatastore *_inner;
}

@property (weak, nonatomic) id<BMStreamDatastorePruningDelegate> delegate;
@property (readonly, nonatomic) BOOL isDataAccessible;

- (void).cxx_destruct;
- (BOOL)deleteEventAtBookmark:(id)a0 outTombstoneBookmark:(id *)a1;
- (void)eventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 policyID:(id)a3 shouldDeleteUsingBlock:(id /* block */)a4;
- (id)initWithStream:(id)a0 config:(id)a1 eventDataClass:(Class)a2;
- (id)newEnumeratorFromBookmark:(id)a0;
- (void)removeEventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (id)streamIdentifier;
- (void)syncMappedFiles;
- (Class)eventBodyClass;
- (void)eventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 shouldDeleteUsingBlock:(id /* block */)a3;
- (id)fetchEventsFrom:(double)a0 to:(double)a1;
- (id)initWithStream:(id)a0 config:(id)a1;
- (id)newEnumeratorFromStartTime:(double)a0;

@end
