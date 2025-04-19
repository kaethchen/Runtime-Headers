@class NSString;

@interface IMKExtensionService_Subsystem : NSObject <PKModularService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initForPlugInKit;
+ (id)_initForPlugInKit;
+ (void)cacheMainBundleAsServiceBundle;
+ (void)doctorServiceBundleInfoDictionary;
+ (BOOL)hasExtensionSDK:(id)a0;


@end
