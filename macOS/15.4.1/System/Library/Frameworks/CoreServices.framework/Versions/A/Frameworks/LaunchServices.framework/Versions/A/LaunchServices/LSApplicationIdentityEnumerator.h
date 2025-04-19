@class NSEnumerator, LSApplicationRecord, NSError, _LSApplicationRecordEnumerator;

@interface LSApplicationIdentityEnumerator : LSEnumerator {
    NSError *_ctxError;
    _LSApplicationRecordEnumerator *_recordEnumerator;
    LSApplicationRecord *_currentRecord;
    NSEnumerator *_currentRecordIdentitiesEnumerator;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithAppEnumerationOptions:(unsigned long long)a0;

@end
