@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ATXDefaultHomeScreenItemManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_homeScreenPath;
    NSString *_ambientPath;
    NSString *_carPlayPath;
}

+ (id)sharedInstance;
+ (id)_descriptorsByFilteringDescriptors:(id)a0 variant:(unsigned long long)a1 fromAppsDisabledOnHomeScreen:(id)a2;
+ (id)_onboardingStacksByFilteringDescriptorsInOnboardingStacks:(id)a0 variant:(unsigned long long)a1;
+ (id)_widgetStackByFilteringDescriptorsInWidgetStack:(id)a0 variant:(unsigned long long)a1;
+ (BOOL)isCHSWidgetDescriptorAllowedForAmbientOnboardingStacks:(id)a0;
+ (BOOL)isCHSWidgetDescriptorAllowedForCarPlayOnboardingStacks:(id)a0;
+ (BOOL)isDescriptorSpecial:(id)a0;
+ (BOOL)shouldFilterOutWidgetDescriptorDueToAppProtection:(id)a0 fromDisabledApps:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_JSONCompatible:(id)a0;
- (void)_fetchSmartStackOfVariant:(unsigned long long)a0 localObserver:(int)a1 completionHandler:(id /* block */)a2;
- (id)_generateOnboardingStacksForVariant:(unsigned long long)a0;
- (id)_generateSmartStackForCarPlayWithDescriptorCache;
- (id)_generateSmartStacksForCarPlay;
- (void)_logFetchedOnboardingStack:(id)a0;
- (void)_readAmbientUpdateFromFileWithCompletionHandler:(id /* block */)a0;
- (void)_readCarPlayUpdateFromFileWithCompletionHandler:(id /* block */)a0;
- (void)_readHomeScreenUpdateFromFileWithCompletionHandler:(id /* block */)a0;
- (void)_readUpdateFromFileAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)_writeUpdate:(id)a0 atPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchDefaultStacksJSONWithCompletionHandler:(id /* block */)a0;
- (void)fetchGalleryItemsForVariant:(unsigned long long)a0 gridSize:(unsigned long long)a1 supportedFamilies:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)fetchSmartStackOfVariant:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)fetchSuggestedGalleryItemsOfGridSize:(unsigned long long)a0 widgetFamilyMask:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (id)fetchWidgetDiscoverabilityStacks;
- (id)initWithHomeScreenPath:(id)a0 ambientPath:(id)a1 carPlayPath:(id)a2;
- (void)writeAmbientUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeCarPlayUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeHomeScreenUpdate:(id)a0 completionHandler:(id /* block */)a1;

@end
