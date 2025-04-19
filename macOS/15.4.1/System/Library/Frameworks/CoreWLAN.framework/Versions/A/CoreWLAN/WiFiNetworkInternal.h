@class NSString, CWNetwork, NSData, CWMutableNetworkProfile;

@interface WiFiNetworkInternal : NSObject {
    NSString *_ssidStr;
    NSData *_ssidData;
}

@property (readonly) CWNetwork *scanResult;
@property (readonly) CWMutableNetworkProfile *profile;
@property BOOL wasAutoJoined;

- (void)dealloc;
- (id)initWithScanResult:(id)a0 profile:(id)a1;

@end
