@class NSMutableData, NSMutableSet, NSData;

@interface WPDAdvertisingData : NSObject

@property (retain) NSMutableData *internalData;
@property (retain) NSMutableSet *types;
@property long long advertRate;
@property (readonly, getter=getData) NSData *data;
@property BOOL enableEPAForAdvertisement;
@property BOOL isRanging;
@property BOOL assertPower;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToData:(id)a0;
- (void)addAdvertisingRequest:(id)a0;
- (BOOL)isEnableEPAForAdvertisement;
- (BOOL)isValidWithAdditionalRequest:(id)a0;

@end
