@class NSMutableDictionary;

@interface IASDeviceIconManager : NSObject

@property (retain) NSMutableDictionary *iconCache;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)deviceIconForIdentifier:(id)a0;
- (id)deviceIconForIdentifier:(id)a0 color:(id)a1;
- (id)deviceIconForIdentifier:(id)a0 deviceColor:(id)a1 enclosureColor:(id)a2;
- (id)deviceTypeFromIdentifier:(id)a0;

@end
