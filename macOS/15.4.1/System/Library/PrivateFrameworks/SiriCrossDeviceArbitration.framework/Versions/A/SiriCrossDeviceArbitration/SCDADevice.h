@class NSString;

@interface SCDADevice : NSObject

@property (readonly, nonatomic) unsigned char deviceClass;
@property (readonly, nonatomic) unsigned char productType;
@property (readonly, nonatomic) NSString *deviceClassName;
@property (readonly, nonatomic) NSString *productTypeName;
@property (readonly, nonatomic) char deviceAdjust_DEPRECATED;
@property (readonly, nonatomic) double inEarDelay;
@property (readonly, nonatomic) double inEarInterval;
@property (readonly, nonatomic) double trumpDelay;
@property (readonly, nonatomic) int cdaDeviceClass;

+ (int)cdaDeviceClassForSCDADeviceClass:(unsigned char)a0 andProducType:(unsigned char)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned char)_getProductType;
- (unsigned char)_getDeviceClass;
- (char)_getDeviceAdjust_DEPRECATED;
- (double)_getInEarDelay;
- (double)_getInEarInterval;
- (double)_getTrumpDelay;
- (id)initWithDeviceClass:(unsigned char)a0 deviceClassName:(id)a1 productType:(unsigned char)a2 productTypeName:(id)a3;
- (void)overrideLocalConfiguration:(unsigned char)a0 deviceAdjust:(char)a1 trumpDelay:(double)a2;

@end
