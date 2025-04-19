@class NSArray, NSMutableDictionary, NSDate;

@interface MCXPlugInKitManagementCache : NSObject

@property int ourPlugInKitPayloadChangeCount;
@property (copy) NSArray *rules;
@property int ourFamilyControlsChangeCount;
@property BOOL haveAppLaunchRestrictions;
@property (copy) NSDate *lastLSPlugInQueryDate;
@property (copy) NSArray *allLSPlugIns;
@property (retain) NSMutableDictionary *localizedNamesByExtensionID;

+ (id)sharedObject;

- (void)dealloc;
- (id)init;
- (BOOL)denyExtensionID:(id)a0 extensionPoint:(id)a1;
- (id)debugEffectiveSettings;
- (BOOL)denyExtensionID:(id)a0 extensionPoint:(id)a1 basedOnRule:(id)a2;
- (id)explicitDeniedExtensionPointsForRule:(id)a0;
- (id)extensionPointForExtensionIdentifier:(id)a0;
- (id)findLSPlugInByExtensionID:(id)a0;
- (id)implicitDeniedExtensionPointsForRule:(id)a0;
- (id)localizedNameForExtensionID:(id)a0;
- (void)reloadFamilyControls;
- (void)reloadIfNeeded;
- (void)reloadPlugInKitSettings;

@end
