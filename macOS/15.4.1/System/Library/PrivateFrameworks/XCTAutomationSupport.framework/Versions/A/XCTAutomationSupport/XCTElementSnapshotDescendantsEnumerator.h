@class NSEnumerator, NSMutableArray;

@interface XCTElementSnapshotDescendantsEnumerator : NSEnumerator

@property (retain) NSEnumerator *innerEnumerator;
@property (retain) NSMutableArray *unenumeratedDescendantsQueue;

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithElementSnapshot:(id)a0;

@end
