@class NSString, NSData, TAManagerProxy, NSNumber;

@interface TADevice : NSObject {
    TAManagerProxy *_proxy;
}

@property (retain, nonatomic) NSData *uid;
@property (retain, nonatomic) NSNumber *vendorID;
@property (retain, nonatomic) NSNumber *productID;
@property (retain, nonatomic) NSNumber *locationID;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSString *transport;
@property (retain, nonatomic) NSString *bluetoothAddress;

+ (id)deviceWithUID:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToDevice:(id)a0;
- (BOOL)authorizeWithCredentialSet:(id)a0 error:(id *)a1;
- (BOOL)pairingState:(long long *)a0 error:(id *)a1;
- (BOOL)isConnected:(BOOL *)a0 error:(id *)a1;
- (BOOL)authorizeWithTicket:(id)a0 error:(id *)a1;
- (id)generateAuthorizationNonceWithError:(id *)a0;
- (id)getNumberProperty:(unsigned int)a0;
- (id)getStringProperty:(unsigned int)a0;
- (BOOL)injectSecureIntentWithError:(id *)a0;
- (BOOL)pairWithError:(id *)a0;
- (BOOL)testSecureSessionWithError:(id *)a0;
- (BOOL)unpairWithError:(id *)a0;

@end
