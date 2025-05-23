@interface MTRBaseClusterWiFiNetworkDiagnostics : MTRGenericBaseCluster

+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeAttributeListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeBSSIDWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeBeaconLostCountWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeBeaconLostCountWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeBeaconRxCountWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeBeaconRxCountWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeBssidWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeChannelNumberWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeChannelNumberWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeCurrentMaxRateWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeCurrentMaxRateWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeOverrunCountWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeOverrunCountWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributePacketMulticastRxCountWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributePacketMulticastRxCountWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributePacketMulticastTxCountWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributePacketMulticastTxCountWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributePacketUnicastRxCountWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributePacketUnicastRxCountWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributePacketUnicastTxCountWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributePacketUnicastTxCountWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeRSSIWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeRssiWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeSecurityTypeWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeSecurityTypeWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeWiFiVersionWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeWiFiVersionWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (void)readAttributeAcceptedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeAcceptedCommandListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeAttributeListWithCompletion:(id /* block */)a0;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeBSSIDWithCompletion:(id /* block */)a0;
- (void)readAttributeBeaconLostCountWithCompletion:(id /* block */)a0;
- (void)readAttributeBeaconLostCountWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeBeaconRxCountWithCompletion:(id /* block */)a0;
- (void)readAttributeBeaconRxCountWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeBssidWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeChannelNumberWithCompletion:(id /* block */)a0;
- (void)readAttributeChannelNumberWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletion:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeCurrentMaxRateWithCompletion:(id /* block */)a0;
- (void)readAttributeCurrentMaxRateWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeFeatureMapWithCompletion:(id /* block */)a0;
- (void)readAttributeFeatureMapWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeGeneratedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeGeneratedCommandListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeOverrunCountWithCompletion:(id /* block */)a0;
- (void)readAttributeOverrunCountWithCompletionHandler:(id /* block */)a0;
- (void)readAttributePacketMulticastRxCountWithCompletion:(id /* block */)a0;
- (void)readAttributePacketMulticastRxCountWithCompletionHandler:(id /* block */)a0;
- (void)readAttributePacketMulticastTxCountWithCompletion:(id /* block */)a0;
- (void)readAttributePacketMulticastTxCountWithCompletionHandler:(id /* block */)a0;
- (void)readAttributePacketUnicastRxCountWithCompletion:(id /* block */)a0;
- (void)readAttributePacketUnicastRxCountWithCompletionHandler:(id /* block */)a0;
- (void)readAttributePacketUnicastTxCountWithCompletion:(id /* block */)a0;
- (void)readAttributePacketUnicastTxCountWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeRSSIWithCompletion:(id /* block */)a0;
- (void)readAttributeRssiWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeSecurityTypeWithCompletion:(id /* block */)a0;
- (void)readAttributeSecurityTypeWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeWiFiVersionWithCompletion:(id /* block */)a0;
- (void)readAttributeWiFiVersionWithCompletionHandler:(id /* block */)a0;
- (void)resetCountsWithCompletion:(id /* block */)a0;
- (void)resetCountsWithCompletionHandler:(id /* block */)a0;
- (void)resetCountsWithParams:(id)a0 completion:(id /* block */)a1;
- (void)resetCountsWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeAcceptedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeAttributeListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeAttributeListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeBSSIDWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeBeaconLostCountWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeBeaconLostCountWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeBeaconRxCountWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeBeaconRxCountWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeBssidWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeChannelNumberWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeChannelNumberWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeClusterRevisionWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeCurrentMaxRateWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeCurrentMaxRateWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeFeatureMapWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeFeatureMapWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeGeneratedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeOverrunCountWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeOverrunCountWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributePacketMulticastRxCountWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributePacketMulticastRxCountWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributePacketMulticastTxCountWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributePacketMulticastTxCountWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributePacketUnicastRxCountWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributePacketUnicastRxCountWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributePacketUnicastTxCountWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributePacketUnicastTxCountWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeRSSIWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeRssiWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeSecurityTypeWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeSecurityTypeWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeWiFiVersionWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeWiFiVersionWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;

@end
