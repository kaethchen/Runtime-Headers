@class CBOOBKeyInfo, NSString, NSUUID, NSData;

@interface TVRCSiriRemoteInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *btAddressData;
@property (retain, nonatomic) NSString *tvModel;
@property (retain, nonatomic) NSData *irkData;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *serialNumber;
@property (nonatomic) BOOL supportsFindMy;
@property (retain, nonatomic) NSString *firmwareVersion;
@property (nonatomic) BOOL connected;
@property (retain, nonatomic) CBOOBKeyInfo *cbKeyInfo;
@property (readonly, nonatomic) NSString *tvName;
@property (readonly, nonatomic) NSUUID *uuid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToRemoteInfo:(id)a0;
- (void)setTvName:(id)a0;

@end
