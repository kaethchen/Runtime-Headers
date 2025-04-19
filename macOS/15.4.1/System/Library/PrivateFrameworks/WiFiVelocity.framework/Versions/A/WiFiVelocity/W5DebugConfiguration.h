@class W5DiagnosticsMode;

@interface W5DebugConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) W5DiagnosticsMode *diagnosticsMode;
@property (nonatomic) long long wifi;
@property (nonatomic) long long megaWiFiProfile;
@property (nonatomic) long long noLoggingWiFiProfile;
@property (nonatomic) long long eapol;
@property (nonatomic) long long bluetooth;
@property (nonatomic) long long stbc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initDiagnosticsMode:(id)a0 wifiState:(long long)a1 megaWiFiProfileState:(long long)a2 noLoggingWiFiProfileState:(long long)a3 eapolState:(long long)a4 bluetoothState:(long long)a5;
- (id)initDiagnosticsMode:(id)a0 wifiState:(long long)a1 megaWiFiProfileState:(long long)a2 noLoggingWiFiProfileState:(long long)a3 eapolState:(long long)a4 bluetoothState:(long long)a5 stbcState:(long long)a6;
- (BOOL)isEqualToDebugConfiguration:(id)a0;

@end
