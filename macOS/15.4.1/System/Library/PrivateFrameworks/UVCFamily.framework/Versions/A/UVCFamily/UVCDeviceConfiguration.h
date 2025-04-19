@class NSArray, NSString;

@interface UVCDeviceConfiguration : NSObject <UVCConfiguration>

@property (readonly) unsigned long long vendorID;
@property (readonly) unsigned long long productID;
@property (readonly) NSArray *hideControls;
@property (readonly) NSArray *addControls;
@property (readonly) long long defaultStreamInterface;
@property (readonly) struct { unsigned char rollSupport : 1; unsigned char validateRollSupportForAttachedDisplay : 1; unsigned char reserved : 6; } swRollSupport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportAllUVCPlatforms;

- (void).cxx_destruct;
- (id)initWithService:(unsigned int)a0;
- (void)parseIOService:(unsigned int)a0;
- (void)parseConfiguration:(id)a0 resourceConfiguartion:(id)a1;
- (void)parseDefaults;

@end
