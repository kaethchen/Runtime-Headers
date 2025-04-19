@class NSData, NSString;

@interface QCSCN_GeometrySourceReserved : NSObject {
    struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSourceAccessor *x1; struct __CFData *x2; BOOL x3; } x0; int x1; unsigned int x2; } *_meshSource;
    NSData *_data;
    NSString *_semantic;
    long long _vectorCount;
    BOOL _floatComponents;
    long long _componentsPerVector;
    long long _bytesPerComponent;
    long long _dataOffset;
    long long _dataStride;
}

- (void)dealloc;

@end
