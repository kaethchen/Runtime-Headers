@class NSArray, NSString;

@interface NSHMDDevice : NSObject {
    struct _SLSHMD { } *_hmd;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    unsigned char _attached : 1;
    unsigned char _acquired : 1;
    unsigned char _awake : 1;
}

@property (class, readonly, copy) NSArray *devices;

@property (readonly, getter=isAttached) BOOL attached;
@property (readonly, getter=isAvailable) BOOL available;
@property (readonly, getter=isAwake) BOOL awake;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long vendorID;
@property (readonly) unsigned long long productID;
@property (readonly) unsigned long long serialNumber;

+ (void)initialize;
+ (id)keyPathsForValuesAffectingAttached;

- (void)dealloc;
- (id)initWithSLSHMD:(struct _SLSHMD { } *)a0;

@end
