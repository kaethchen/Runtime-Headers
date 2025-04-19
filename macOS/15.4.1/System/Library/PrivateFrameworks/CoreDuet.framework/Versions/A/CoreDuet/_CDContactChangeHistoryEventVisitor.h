@class NSEnumerator, NSArray, NSString, NSMutableArray;

@interface _CDContactChangeHistoryEventVisitor : NSObject <CNChangeHistoryEventVisitor> {
    NSEnumerator *_changeEnumerator;
    NSMutableArray *_deletedContactIdentifiers;
    unsigned long long _count;
}

@property (readonly, nonatomic) NSArray *deletedContactIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (id)initWithChangeEnumerator:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (void)visitEventsWithBatchSize:(unsigned long long)a0 batchCallback:(id /* block */)a1;
- (void)visitUpdateContactEvent:(id)a0;

@end
