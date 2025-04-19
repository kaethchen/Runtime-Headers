@class ISDRecordStore, NSArray, ISyncConcreteSession;

@interface ISDChangeEnumerator : NSEnumerator {
    ISyncConcreteSession *_session;
    ISDRecordStore *_clientStore;
    ISDRecordStore *_truth;
    NSArray *_recordIds;
    NSArray *_clientRecordCache;
    NSArray *_truthRecordCache;
    unsigned long long _recordIdIndex;
    unsigned long long _clientRecordCacheIndex;
    unsigned long long _truthRecordCacheIndex;
}

- (void)dealloc;
- (id)nextObject;
- (BOOL)_fillCache;
- (id)initWithSession:(id)a0 clientRecordStore:(id)a1 truth:(id)a2 recordIds:(id)a3;

@end
