@class NSDictionary, NSSet;

@interface RMStatusPublisherDescription : NSObject

@property (readonly, copy, nonatomic) NSDictionary *statusKeysByXPCEvent;
@property (readonly, copy, nonatomic) NSSet *statusKeys;

+ (id)descriptionWithEventsDictionary:(id)a0;
+ (id)descriptionWithServiceDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)_loadManagedSettingsDescription;
- (void)_loadDescription:(id)a0;
- (void)_loadDescriptionFromStatusEvents:(id)a0 statusKeysByNotification:(id)a1 statusKeysWithoutNotification:(id)a2;
- (BOOL)_validateStatusEvents:(id)a0;
- (BOOL)_validateStatusKeysByNotification:(id)a0;
- (BOOL)_validateStatusKeysWithoutNotification:(id)a0;

@end
