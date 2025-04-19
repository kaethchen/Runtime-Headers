@class NSString;

@interface _IOSurfaceDebugDescription : IOSurfaceDebugDescription {
    struct { unsigned long long clientAddress; unsigned int surfaceID; unsigned int pixelFormat; unsigned int retainCount; unsigned int yCbCrMatrix; unsigned int cacheMode; unsigned int mapCacheAttribute; unsigned int purgeableState; unsigned int purgeableStateAPI; unsigned long long allocOffset; unsigned long long allocSize; unsigned char isGlobal; unsigned char isAllocated; unsigned char isWired; unsigned char pad; unsigned int parentSurfaceID; unsigned long long detachModeCode; unsigned long long initDetachModeCodeTime; unsigned long long protectionOptions; unsigned long long residentSize; unsigned long long dirtySize; unsigned long long traceID; unsigned long long memDescID; } _basicInfo;
    struct { unsigned long long offset; unsigned long long width; unsigned long long height; unsigned long long bytesPerRow; unsigned int bytesPerElement; unsigned int elementWidth; unsigned int elementHeight; } _layoutInfo;
    NSString *_name;
}

@property (readonly) unsigned long long virtualAddress;
@property (readonly) unsigned long long allocationSize;
@property (readonly) unsigned int surfaceID;
@property (readonly) unsigned int pixelFormat;
@property (readonly) NSString *pixelFormatString;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long residentSize;
@property (readonly) unsigned long long dirtySize;
@property (readonly) NSString *name;
@property (readonly) unsigned long long traceID;

- (void)dealloc;
- (id)description;
- (id)initWithBasicInfo:(const struct { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned long long x9; unsigned long long x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned int x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; } *)a0 layoutInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a1 name:(id)a2;

@end
