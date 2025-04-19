@class AVB17221AECPMessage, AVBMACAddress;

@interface AVB17221AECPPendingResponse : NSObject {
    BOOL addedControlRoutingID;
}

@property (copy) AVBMACAddress *destMAC;
@property BOOL responseReceived;
@property (copy) AVB17221AECPMessage *message;
@property (copy) id /* block */ completionHandler;
@property BOOL inProgressReceived;
@property BOOL retried;

- (void).cxx_destruct;

@end
