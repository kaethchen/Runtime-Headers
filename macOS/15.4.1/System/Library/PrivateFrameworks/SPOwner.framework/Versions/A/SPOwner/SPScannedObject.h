@class SPIndexInformation, NSData, NSDate, NSNumber, SPAccessoryInformation;

@interface SPScannedObject : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long advertisementType;
@property (nonatomic) unsigned char poshNetwork;
@property (nonatomic) BOOL nearOwner;
@property (copy, nonatomic) NSData *vendorPayload;
@property (copy, nonatomic) NSDate *scanDate;
@property (copy, nonatomic) NSData *address;
@property (copy, nonatomic) NSData *advertisement;
@property (nonatomic) unsigned char status;
@property (nonatomic) unsigned char ek;
@property (nonatomic) long long rssi;
@property (readonly, copy, nonatomic) NSNumber *hint;
@property (readonly, copy, nonatomic) NSData *optional;
@property (readonly, copy, nonatomic) SPAccessoryInformation *accessoryInformation;
@property (readonly, copy, nonatomic) SPIndexInformation *indexInformation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAdvertisementType:(long long)a0 poshNetwork:(unsigned char)a1 nearOwner:(BOOL)a2 vendorPayload:(id)a3 scanDate:(id)a4 address:(id)a5 advertisement:(id)a6 status:(unsigned char)a7 ek:(unsigned char)a8 hint:(id)a9 rssi:(long long)a10 indexInformation:(id)a11 acccessoryInformation:(id)a12;

@end
