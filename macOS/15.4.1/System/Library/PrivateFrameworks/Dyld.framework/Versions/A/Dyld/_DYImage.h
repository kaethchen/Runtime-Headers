@class NSString, NSUUID, NSArray, _DYSharedCache;

@interface _DYImage : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_segments;
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) NSString *installname;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) unsigned long long address;
@property (nonatomic, readonly) unsigned long long pointerSize;
@property (nonatomic, readonly) unsigned long long preferredLoadAddress;
@property (nonatomic, readonly) _DYSharedCache *sharedCache;
@property (nonatomic, copy) NSArray *segments;

- (id)init;
- (void).cxx_destruct;
- (void)getFastPathData:(struct _DYImageFastPathData { void *x0; unsigned long long x1; void *x2; unsigned long long x3; unsigned char x4[16]; unsigned long long x5; BOOL x6; BOOL x7; BOOL x8; } *)a0;

@end
