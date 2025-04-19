@interface VCWifiAssistManager : NSObject

@property (readonly) BOOL isAvailable;
@property (readonly) unsigned char wifiAssistState;

+ (id)sharedInstance;

- (id)init;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;

@end
