@class NSData, NSString;

@interface SMPairingHandshakeParameters : NSObject

@property (retain) NSData *localCertificate;
@property (copy) NSString *accessPointSSID;
@property (copy) NSString *accessPointPassword;

- (void).cxx_destruct;

@end
