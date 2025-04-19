@class NSObject;
@protocol OS_xpc_object;

@interface PGMemoryMapSegment : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> *_shmem;
    BOOL _fromCoder;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long physicalAddress;
@property (readonly) unsigned long long physicalLength;
@property (readonly) void *virtualAddress;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRange:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; void *x3; } *)a0;

@end
