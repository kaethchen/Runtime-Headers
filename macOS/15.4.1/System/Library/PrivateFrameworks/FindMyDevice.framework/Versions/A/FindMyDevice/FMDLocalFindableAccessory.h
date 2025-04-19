@class NSUUID, NSString, NSData, NSObject;
@protocol FMDIdentifiable;

@interface FMDLocalFindableAccessory : NSObject <NSSecureCoding, FMDAccessory>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *alternateSerialNumber;
@property (copy, nonatomic) NSData *irkData;
@property (copy, nonatomic) NSString *btAddress;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSString *vendorId;
@property (copy, nonatomic) NSString *productId;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (copy, nonatomic) NSUUID *baUUID;
@property (readonly, nonatomic) NSObject<FMDIdentifiable> *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
