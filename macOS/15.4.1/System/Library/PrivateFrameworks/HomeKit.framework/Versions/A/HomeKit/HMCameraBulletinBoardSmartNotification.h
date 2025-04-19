@class HMCameraUserSettings, NSString, NSArray;

@interface HMCameraBulletinBoardSmartNotification : HMBulletinBoardNotification <HMFLogging, HMFObject>

@property (weak) HMCameraUserSettings *cameraUserSettings;
@property (readonly) unsigned long long significantEventTypes;
@property (readonly) unsigned long long personFamiliarityOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)personFamiliarityOptionsInPredicate:(id)a0;
+ (id)predicateForPersonFamiliarityOptions:(unsigned long long)a0;
+ (id)predicateForSignificantEventTypes:(unsigned long long)a0;
+ (id)predicateForSignificantEventTypes:(unsigned long long)a0 personFamiliarityOptions:(unsigned long long)a1;
+ (id)significantEventTypesInPredicate:(id)a0;

@end
