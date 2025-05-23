@class NSArray, NSMutableArray;

@interface SKThreadSafeMutableArray : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _storageLock;
    NSMutableArray *_storage;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak) NSArray *arrayRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)removeObjectsInArray:(id)a0;
- (id)initWithNSMutableArray:(id)a0;

@end
