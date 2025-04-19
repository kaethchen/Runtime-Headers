@interface IDSGFTMetricsMKI : IDSGFTMetricsReferencePoint

- (void)receivedFirstPacketTime:(double)a0;
- (void)receivedFromGFT2;
- (void)receivedFromPush;
- (void)receivedFromQR;
- (void)receivedFromRatcheting;

@end
