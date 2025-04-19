@class NSString;

@interface WKNSArray : NSArray <WKObject> {
    struct ObjectStorage<API::Array> { struct type { unsigned char __lx[32]; } data; } _array;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (struct RefPtr<API::Array, WTF::RawPtrTraits<API::Array>, WTF::DefaultRefDerefTraits<API::Array>> { struct Array *x0; })_protectedArray;

@end
