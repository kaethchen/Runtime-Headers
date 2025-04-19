@class HKSharedSummaryTransaction, NSString, NSSet;

@interface HDSharedSummaryQueryServer : HDQueryServer {
    HKSharedSummaryTransaction *_transaction;
    NSString *_package;
    NSSet *_includedIdentifiers;
    NSSet *_includedObjectTypes;
}

+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;

@end
