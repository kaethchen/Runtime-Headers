@class NSString, WiFiAwarePublishConfiguration, WiFiP2PXPCConnection, NSMutableArray, NSNumber;
@protocol WiFiAwarePublisherDelegate;

@interface WiFiAwarePublisher : NSObject <WiFiAwarePublisherXPCDelegate, WiFiP2PXPCConnectionDelegate> {
    WiFiP2PXPCConnection *_xpcConnection;
    NSMutableArray *_dataSessionHandles;
    NSNumber *_publishID;
    NSNumber *_maximumNANDataPath;
}

@property (weak, nonatomic) id<WiFiAwarePublisherDelegate> delegate;
@property (readonly, nonatomic) WiFiAwarePublishConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (id)exportedInterface;
- (id)exportedObject;
- (id)remoteObjectInterface;
- (void)stop;
- (id)initWithConfiguration:(id)a0;
- (void)handleError:(long long)a0;
- (void)reportIssue:(id)a0 forDataSession:(id)a1;
- (void)sendMessage:(id)a0 toPeerAddress:(id)a1 withInstanceID:(unsigned char)a2 completionHandler:(id /* block */)a3;
- (void)terminateDataSession:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateServiceSpecificInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)generateDiversifiedPINForDataSession:(id)a0 completionHandler:(id /* block */)a1;
- (void)generateStatisticsReportForDataSession:(id)a0 completionHandler:(id /* block */)a1;
- (void)publishDataConfirmedForHandle:(id)a0 localInterfaceIndex:(unsigned int)a1 serviceSpecificInfo:(id)a2;
- (void)publishDataTerminatedForHandle:(id)a0 reason:(long long)a1;
- (void)publishDetectedMulticastError:(long long)a0 fromMulticastReceiver:(id)a1;
- (void)publishFailedToStartWithError:(long long)a0;
- (void)publishPairingRequestIndicatedBySubscriber:(id)a0 withPairingMethod:(long long)a1 pairingAuthenticationGeneratedCompletionHandler:(id /* block */)a2;
- (void)publishReceivedDataBlobForMulticastSession:(id)a0 fromPeer:(id)a1;
- (void)publishReceivedMessage:(id)a0 fromSubscriberID:(unsigned char)a1 subscriberAddress:(id)a2;
- (void)publishStartedWithInstanceID:(unsigned char)a0 maximumNANDataPath:(unsigned int)a1;
- (void)publishTerminatedWithReason:(long long)a0;
- (void)sendDataBlobForMulticastSession:(id)a0 toPeerAddress:(id)a1 usingMulticastAddress:(unsigned char)a2 completionHandler:(id /* block */)a3;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)terminateMulticastSession:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateDatapathServiceSpecificInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateLinkStatus:(long long)a0 forDataSession:(id)a1;

@end
