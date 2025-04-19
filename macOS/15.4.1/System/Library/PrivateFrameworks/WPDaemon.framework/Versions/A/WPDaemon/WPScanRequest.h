@class NSArray, NSDictionary, NSData, NSNumber;

@interface WPScanRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned char clientType;
@property struct { long long screenOnInterval; long long screenOffInterval; long long window; } scanningRates;
@property BOOL allowDuplicates;
@property BOOL scanWhenLocked;
@property BOOL activeScanning;
@property BOOL scanCache;
@property (retain) NSNumber *rssiThreshold;
@property (retain, nonatomic) NSData *blobValue;
@property (retain, nonatomic) NSData *maskValue;
@property (retain) NSDictionary *options;
@property (retain) NSArray *peers;
@property double updateTime;
@property long long nearbyScanMode;
@property long long advBuffer;
@property BOOL priorityCritical;
@property BOOL range;
@property BOOL holdVoucher;
@property (retain) NSArray *useCaseList;
@property long long requestedAtNsec;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)convertUseCaseToString:(id)a0;

@end
