@class PHASEEngine, NSArray, NSMutableSet, NSMutableArray;

@interface PHASEObject : NSObject <NSCopying> {
    NSMutableSet *_children;
}

@property (class, readonly) void /* unknown type, empty encoding */ right;
@property (class, readonly) void /* unknown type, empty encoding */ up;
@property (class, readonly) void /* unknown type, empty encoding */ forward;

@property (weak, nonatomic) PHASEObject *parent;
@property (readonly, weak, nonatomic) PHASEEngine *engine;
@property (nonatomic) struct Handle64 { unsigned long long mData; } geoEntityHandle;
@property (retain, nonatomic) NSMutableArray *geoShapeHandles;
@property (readonly, copy, nonatomic) NSArray *children;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } worldTransform;

+ (id)new;
+ (void)deRegisterSubTree:(id)a0 engine:(id)a1;
+ (void)registerSubTree:(id)a0 engine:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)removeChild:(id)a0;
- (id)initWithEngine:(id)a0;
- (void)removeChildren;
- (BOOL)addChild:(id)a0 error:(id *)a1;
- (struct { void /* unknown type, empty encoding */ x0[4]; })_convertTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 fromObject:(id)a1;
- (void)_storeTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)initWithEngine:(id)a0 entityType:(unsigned int)a1 shapes:(id)a2;
- (BOOL)isConnectedToRoot;
- (BOOL)isUnderTarget:(id)a0;
- (BOOL)validateTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 outAffine:(void *)a1;

@end
