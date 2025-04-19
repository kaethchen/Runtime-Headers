@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface CPLPlatform : NSObject {
    NSMapTable *_abstractClassToImplementation;
    NSObject<OS_dispatch_queue> *_lock;
}

@property (copy, nonatomic) NSString *suffix;

+ (id)currentPlatform;
+ (id)defaultPlatform;
+ (void)setDefaultPlatform:(id)a0;
+ (void)setProxyImplementationForPlatform:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (Class)implementationClassForAbstractClass:(Class)a0;
- (id)newPlatformImplementationForObject:(id)a0;
- (void)setPlatformImplementation:(Class)a0 forClass:(Class)a1;

@end
