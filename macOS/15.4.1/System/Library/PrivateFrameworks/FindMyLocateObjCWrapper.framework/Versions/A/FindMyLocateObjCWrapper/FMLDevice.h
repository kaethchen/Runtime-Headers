@class NSString;

@interface FMLDevice : NSObject

@property (copy) NSString *identifier;
@property (copy) NSString *deviceName;
@property (copy) NSString *idsDeviceId;
@property BOOL isActive;
@property BOOL isThisDevice;
@property BOOL isCompanion;
@property BOOL isAutoMeCapable;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)comparisonIdentifier;
- (id)initWithIdentifier:(id)a0 deviceName:(id)a1 idsDeviceId:(id)a2 isActive:(BOOL)a3 isThisDevice:(BOOL)a4 isCompanion:(BOOL)a5 isAutoMeCapable:(BOOL)a6;

@end
