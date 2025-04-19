@class OSAComponentInstance, NSString;

@interface OSALanguagePrivate : NSObject {
    OSAComponentInstance *_genericComponentInstance;
    struct ComponentRecord { long long x0[1]; } *_component;
    struct ComponentInstanceRecord { long long x0[1]; } *_instance;
    struct ComponentDescription { unsigned int componentType; unsigned int componentSubType; unsigned int componentManufacturer; unsigned int componentFlags; unsigned int componentFlagsMask; } _description;
    NSString *_name;
    NSString *_info;
    NSString *_version;
}

- (void)dealloc;
- (id)initWithComponent:(struct ComponentRecord { long long x0[1]; } *)a0;

@end
