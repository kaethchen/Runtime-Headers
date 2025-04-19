@class IMDMessageStore;

@interface IMDeliveryReceiptProcessingPipelineComponent : IMPipelineComponent {
    IMDMessageStore *_messageStore;
}

- (void).cxx_destruct;
- (void)_metricMessageGUIDDelivered:(id)a0 sendDate:(id)a1 deliveryDate:(id)a2;
- (void)_metricMessageGUIDSendToDelivered:(id)a0;
- (id)_processDeliveryReceiptForMessage:(id)a0 date:(id)a1 isFromOffGridCapableDevice:(BOOL)a2 chat:(id)a3;
- (void)_reduceExpectedSatelliteDeliveriesOnMessage:(id)a0 chat:(id)a1;
- (id)initWithMessageStore:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
