@interface MSPAuthFeedbackReportTicket : MSPBaseFeedbackReportTicket

- (void)submitWithCallbackQueue:(id)a0 handler:(id /* block */)a1 networkActivity:(id /* block */)a2;
- (id)_dataToSign;

@end
