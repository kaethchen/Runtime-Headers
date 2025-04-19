@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface ASPlatformInfo : NSObject {
    NSString *_boardID;
    NSString *_configCode;
    NSString *_localeCode;
}

@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSString *computerName;
@property (readonly) NSString *macModelString;
@property (readonly) NSString *macModelName;
@property (readonly) NSString *macModelDetails;
@property (readonly) NSString *boardID;
@property (readonly) NSString *processorString;
@property (readonly) NSString *regulatoryID;
@property (readonly) NSString *serialString;
@property (readonly) NSString *installedMemoryDescription;
@property (readonly) NSString *installedMemorySize;
@property (readonly) BOOL hasUpgradableMemory;
@property (readonly) BOOL usesECC;
@property (readonly) NSString *dimmType;
@property (readonly) unsigned long long totalSlots;
@property (readonly) unsigned long long unusedSlots;
@property (readonly) NSArray *memoryModules;
@property (readonly) NSString *osTitleString;
@property (readonly) NSString *osVersionString;
@property (readonly) NSString *osBuildString;
@property (readonly) BOOL isBeta;
@property (readonly) NSString *configCode;
@property (readonly) NSString *localeCode;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (id)localizedStringForKey:(id)a0;
- (int)setComputerName:(id)a0;
- (void)setModelString:(id)a0;
- (id)cleansedComputerNameFromComputerName:(id)a0;
- (void)getMemoryInfoWithCompletion:(id /* block */)a0;
- (void)getModelNameWithCompletion:(id /* block */)a0;
- (void)initOSInfo;
- (id)loadModelNameFromCache;
- (void)storeModelNameToCache:(id)a0;
- (id)zeroConfNameFromComputerName:(id)a0;

@end
