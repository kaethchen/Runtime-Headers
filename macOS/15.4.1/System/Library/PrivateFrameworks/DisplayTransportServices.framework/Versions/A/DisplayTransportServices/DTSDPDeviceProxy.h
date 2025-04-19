@class NSString, DTSDisplayPortDeviceAnalyticsData, DTSDPDeviceDescription;
@protocol DTSIOPMAssertion, DTSDisplayPortDeviceInfo;

@interface DTSDPDeviceProxy : NSObject <DTSDisplayPortDevice>

@property (class, readonly, nonatomic) long long nativeAUXTransactionLengthLimit;
@property (class, readonly, nonatomic) long long i2cTransactionLengthLimit;

@property (retain, nonatomic) DTSDPDeviceDescription *remoteDeviceDescription;
@property (readonly, nonatomic) NSString *portLookupKey;
@property (nonatomic) long long portState;
@property (retain, nonatomic) id<DTSIOPMAssertion> sleepAssertion;
@property (retain, nonatomic) DTSDisplayPortDeviceAnalyticsData *analyticsData;
@property (readonly, nonatomic) id<DTSDisplayPortDeviceInfo> info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (long long)portStateForKey:(id)a0;
+ (void)setPortState:(long long)a0 forKey:(id)a1;

- (void).cxx_destruct;
- (id)initWithDescription:(id)a0;
- (BOOL)unlock:(id *)a0;
- (BOOL)lock:(id *)a0;
- (BOOL)_isDeviceLocked;
- (BOOL)_assertPortState:(id *)a0;
- (void)_deassertPortState;
- (id)i2cReadAtAddress:(long long)a0 length:(long long)a1 error:(id *)a2;
- (BOOL)i2cWriteAtAddress:(long long)a0 data:(id)a1 error:(id *)a2;
- (id)i2cWriteReadAtAddress:(long long)a0 data:(id)a1 length:(long long)a2 error:(id *)a3;
- (id)nativeReadAtAddress:(long long)a0 length:(long long)a1 error:(id *)a2;
- (BOOL)nativeWriteAtAddress:(long long)a0 data:(id)a1 error:(id *)a2;

@end
