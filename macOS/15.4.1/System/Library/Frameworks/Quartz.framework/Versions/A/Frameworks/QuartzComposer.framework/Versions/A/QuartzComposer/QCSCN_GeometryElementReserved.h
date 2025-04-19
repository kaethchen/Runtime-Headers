@class NSData;

@interface QCSCN_GeometryElementReserved : NSObject {
    struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __CFData *x1; unsigned int x2; int x3; unsigned int x4; BOOL x5; struct __C3DMeshSource *x6; struct _SCNVector3 { double x0; double x1; double x2; } x7[2]; unsigned int x8; } *_meshElement;
    NSData *_data;
    int _primitiveType;
    long long _primitiveCount;
    long long _bytesPerIndex;
}

- (void)dealloc;

@end
