@class ULWiFiScanChannel, NSString, NSDate;

@interface ULWiFiAssociatedState : NSObject

@property (retain, nonatomic) ULWiFiScanChannel *channel;
@property (retain, nonatomic) NSString *BSSID;
@property (nonatomic) long long RSSI;
@property (retain, nonatomic) NSDate *time;
@property (nonatomic) BOOL isAssociated;

- (id)description;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0 BSSID:(id)a1 RSSI:(long long)a2 time:(id)a3;

@end
