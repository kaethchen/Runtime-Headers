@class NSData, NSNumber;

@interface MTSWiFiScanResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *ssid;
@property (readonly) NSNumber *rssi;
@property (readonly) unsigned char security;
@property (readonly) unsigned char band;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSSID:(id)a0 rssi:(id)a1 security:(unsigned char)a2 band:(unsigned char)a3;

@end
