@class NSString, NSArray, GCVersion, _GCConfigurationBundle;

@interface _GCDeviceDBBundle : NSObject {
    _GCConfigurationBundle *_bundle;
}

@property (readonly) NSString *identifier;
@property (readonly) GCVersion *version;
@property (readonly, copy) NSArray *devices;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithBundle:(id)a0 error:(out id *)a1;

@end
