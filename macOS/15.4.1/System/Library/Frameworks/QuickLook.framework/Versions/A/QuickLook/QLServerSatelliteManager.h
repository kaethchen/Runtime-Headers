@class NSUUID, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface QLServerSatelliteManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_satellites;
    NSMutableDictionary *_identifiers;
    NSMutableDictionary *_sandboxVariants;
}

@property (retain) NSUUID *generalIdentifier;
@property (retain) NSUUID *personalIdentifier;
@property (retain) NSUUID *previewsIdentifier;
@property (retain) NSUUID *unsandboxedIdentifier;

+ (id)defaultManager;

- (void)dealloc;
- (id)init;
- (id)_identifierForRequest:(struct __QLRequest { } *)a0 generatorIDs:(id *)a1 customName:(id *)a2;
- (void)_setupGeneratorsMapping;
- (id)satelliteForRequest:(struct __QLRequest { } *)a0;

@end
