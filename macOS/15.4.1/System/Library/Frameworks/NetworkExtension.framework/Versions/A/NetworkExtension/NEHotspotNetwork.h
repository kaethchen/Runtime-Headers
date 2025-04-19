@class NSString;

@interface NEHotspotNetwork : NSObject {
    struct __CNNetwork { } *_network;
}

@property long long securityType;
@property (readonly) NSString *SSID;
@property (readonly) NSString *BSSID;

+ (void)fetchCurrentWithCompletionHandler:(id /* block */)a0;

- (void)dealloc;
- (id)description;
- (void)setPassword:(id)a0;
- (void)setConfidence:(long long)a0;
- (BOOL)isSecure;
- (double)signalStrength;
- (BOOL)didAutoJoin;
- (BOOL)didJustJoin;
- (BOOL)isChosenHelper;

@end
