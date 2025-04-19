@class NSPersistentHistoryTransaction;

@interface _PFBatchHistoryFaultingArray : _PFBatchFaultingArray {
    NSPersistentHistoryTransaction *_transaction;
}

+ (Class)classForKeyedUnarchiver;

- (Class)classForCoder;
- (void)_setTransaction:(id)a0;
- (id)transaction;
- (id)initWithPFBatchFaultingArray:(id)a0;

@end
