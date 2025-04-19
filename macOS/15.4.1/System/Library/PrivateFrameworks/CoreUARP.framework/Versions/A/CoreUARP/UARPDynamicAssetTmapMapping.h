@class NSString, NSArray, NSObject;
@protocol OS_os_log;

@interface UARPDynamicAssetTmapMapping : NSObject <NSSecureCoding> {
    NSString *_appleModelNumber;
    NSArray *_tmapEvents;
    NSObject<OS_os_log> *_log;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)tag;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addSysdiagnoseMetrics:(id)a0 coreAnalyticsEvent:(id)a1;
- (BOOL)appendTmapEvents:(id)a0 endian:(id)a1;
- (id)expandMticData:(id)a0 withEventID:(unsigned int)a1;
- (id)findTmapEvent:(unsigned long long)a0;
- (id)initWithEvents:(id)a0 appleModelNumber:(id)a1 endian:(id)a2;
- (BOOL)isEqualAppleModel:(id)a0;

@end
