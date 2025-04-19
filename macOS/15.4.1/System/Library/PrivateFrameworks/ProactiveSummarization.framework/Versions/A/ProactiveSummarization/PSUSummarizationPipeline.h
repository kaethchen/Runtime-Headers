@interface PSUSummarizationPipeline : NSObject {
    void /* unknown type, empty encoding */ guardedSummarizationPipeline;
    void /* unknown type, empty encoding */ contactStore;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (void)deleteItemsWithIdentifiers:(id)a0 bundleId:(id)a1;
- (void)processItem:(id)a0 receivedDate:(id)a1 positionInReceivedItems:(long long)a2;

@end
