@class AVB17221ACMPMessage;

@interface AVB17221ACMPPendingResponse : NSObject

@property BOOL responseReceived;
@property (copy) AVB17221ACMPMessage *message;
@property (copy) id /* block */ completionHandler;

- (void).cxx_destruct;

@end
