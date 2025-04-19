@class NSString, ULWiFiScanChannel, NSDate;

@interface ULWiFiRawScanSingleAP : NSObject

@property (retain, nonatomic) NSString *SSID;
@property (retain, nonatomic) NSString *BSSID;
@property (retain, nonatomic) ULWiFiScanChannel *channel;
@property (retain, nonatomic) NSDate *scanTimestamp;
@property (nonatomic) long long RSSI;
@property (nonatomic) BOOL isRssiInvalid;
@property (nonatomic) BOOL isRssiOffChannel;
@property (nonatomic) BOOL isPersonalHotSpot;

- (id)description;
- (void).cxx_destruct;

@end
