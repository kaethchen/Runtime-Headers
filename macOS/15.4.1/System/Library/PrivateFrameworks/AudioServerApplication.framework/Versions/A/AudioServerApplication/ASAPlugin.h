@class NSString, NSURL, NSArray;

@interface ASAPlugin : ASAObject

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSURL *resourceBundleURL;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSArray *boxObjectIDs;
@property (readonly, copy, nonatomic) NSArray *audioDeviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *clockDeviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *boxes;
@property (readonly, copy, nonatomic) NSArray *audioDevices;
@property (readonly, copy, nonatomic) NSArray *clockDevices;

+ (id)pluginWithBundleIdentifier:(id)a0;

- (id)bundleID;
- (id)initWithBundleIdentifier:(id)a0;
- (id)manufacturer;
- (id)audioDevices;
- (id)boxes;
- (id)clockDevices;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (id)deviceObjectIDs;
- (unsigned int)audioDeviceObjectIDWithUID:(id)a0;
- (id)audioDeviceObjectIDs;
- (id)audioDeviceWithUID:(id)a0;
- (unsigned int)boxObjectIDWithUID:(id)a0;
- (id)boxObjectIDs;
- (id)boxWithUID:(id)a0;
- (unsigned int)clockDeviceObjectIDWithUID:(id)a0;
- (id)clockDeviceObjectIDs;
- (id)clockDeviceWithUID:(id)a0;
- (id)coreAudioClassName;
- (id)resourceBundleURL;

@end
