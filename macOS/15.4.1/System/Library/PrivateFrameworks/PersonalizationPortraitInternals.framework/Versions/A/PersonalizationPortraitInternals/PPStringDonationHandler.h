@class PPSWStringDonationConsumer;

@interface PPStringDonationHandler : NSObject <PPStringDonationProtocol> {
    PPSWStringDonationConsumer *_consumer;
}

- (id)init;
- (void).cxx_destruct;
- (void)donateLabeledStrings:(id)a0 bundleId:(id)a1 groupId:(id)a2 documentId:(id)a3 completion:(id /* block */)a4;
- (id)initWithTopicStore:(id)a0 entityStore:(id)a1 topicDissector:(id)a2 entityDissector:(id)a3;

@end
