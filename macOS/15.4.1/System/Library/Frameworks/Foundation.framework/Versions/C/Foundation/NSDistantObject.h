@class NSConnection;

@interface NSDistantObject : NSProxy <NSCoding> {
    id _knownSelectors;
    unsigned long long _wireCount;
    unsigned long long _refCount;
    id _proto;
    unsigned short ___2;
    unsigned char ___1;
    unsigned char _wireType;
    id _remoteClass;
}

@property (readonly, retain) NSConnection *connectionForProxy;

+ (void)initialize;
+ (void)_enableLogging:(BOOL)a0;
+ (id)newDistantObjectWithCoder:(id)a0;
+ (id)proxyWithLocal:(id)a0 connection:(id)a1;
+ (id)proxyWithTarget:(id)a0 connection:(id)a1;

- (BOOL)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (BOOL)_tryRetain;
- (Class)class;
- (BOOL)conformsToProtocol:(id)a0;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)forwardInvocation:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (struct _NSZone { } *)zone;
- (void)appendFormat:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringByAppendingFormat:(id)a0;
- (void)retainWireCount;
- (void)_releaseWireCount:(unsigned long long)a0;
- (id)initWithLocal:(id)a0 connection:(id)a1;
- (id)initWithTarget:(id)a0 connection:(id)a1;
- (id)protocolForProxy;
- (void)setProtocolForProxy:(id)a0;

@end
