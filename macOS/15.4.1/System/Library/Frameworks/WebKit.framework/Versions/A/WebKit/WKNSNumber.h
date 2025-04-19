@class NSString;

@interface WKNSNumber : NSNumber <WKObject> {
    int _type;
    union { struct ObjectStorage<API::Boolean> { struct type { unsigned char __lx[24]; } data; } _boolean; struct ObjectStorage<API::Double> { struct type { unsigned char __lx[24]; } data; } _double; struct ObjectStorage<API::UInt64> { struct type { unsigned char __lx[24]; } data; } _uint64; struct ObjectStorage<API::Int64> { struct type { unsigned char __lx[24]; } data; } _int64; } _number;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)charValue;
- (double)doubleValue;
- (long long)longLongValue;
- (const char *)objCType;
- (unsigned long long)unsignedLongLongValue;
- (void)getValue:(void *)a0;

@end
