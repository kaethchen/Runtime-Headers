@class NSString;

@interface VUIAppUserDefaults : NSObject <VUIAppUserDefaultsStoring>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedUserDefaults;

@end
