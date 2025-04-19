@class NSString, NSArray, NSObject;
@protocol OS_os_log;

@interface UARPDynamicAssetCmapMapping : NSObject <NSSecureCoding> {
    NSObject<OS_os_log> *_log;
    NSString *_appleModelNumber;
    NSArray *_cmapEvents;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)tag;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)appendCmapEvents:(id)a0;
- (id)expandCrshDictionary:(id)a0;
- (id)findCmapEvent:(id)a0;
- (id)initWithEvents:(id)a0 appleModelNumber:(id)a1;
- (BOOL)isEqualAppleModel:(id)a0;

@end
