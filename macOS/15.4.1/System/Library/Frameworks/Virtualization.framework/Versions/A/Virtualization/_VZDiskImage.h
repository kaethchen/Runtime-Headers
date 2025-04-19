@class NSURL, NSString, NSNumber;

@interface _VZDiskImage : NSObject {
    struct Descriptor { struct DiskImageFormat *format; int cache_mode; struct vector<Base::PropertyBag, std::allocator<Base::PropertyBag>> { struct PropertyBag *__begin_; struct PropertyBag *__end_; struct __compressed_pair<Base::PropertyBag *, std::allocator<Base::PropertyBag>> { struct PropertyBag *__value_; } __end_cap_; } parameters; } _descriptor;
    long long _backendType;
}

@property (readonly, copy) NSURL *URL;
@property (readonly, getter=isReadOnly) BOOL readOnly;
@property (readonly) long long cachingMode;
@property (readonly) long long synchronizationMode;
@property (readonly) NSString *identifier;
@property (copy) NSNumber *updateDiskSize;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1 error:(id *)a2;
- (id)initWithDescriptor:(id)a0 error:(id *)a1;

@end
