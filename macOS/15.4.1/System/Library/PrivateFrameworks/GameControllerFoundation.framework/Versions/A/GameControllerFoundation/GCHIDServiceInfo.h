@class NSNumber, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface GCHIDServiceInfo : NSObject <GCHIDSystemServiceInfo> {
    const struct GCHIDServiceClientFunctions { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; } *_functions;
}

@property (readonly) struct __IOHIDServiceClient { } *service;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSNumber *registryID;
@property (readonly) NSNumber *serviceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)numberPropertyForKey:(id)a0;
- (id)initWithService:(struct __IOHIDServiceClient { } *)a0 queue:(id)a1;
- (id)dictionaryPropertyForKey:(id)a0;
- (id)propertyForKey:(id)a0 ofClass:(Class)a1;
- (id)stringPropertyForKey:(id)a0;
- (id)initWithService:(struct __IOHIDServiceClient { } *)a0 queue:(id)a1 functions:(const struct GCHIDServiceClientFunctions { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; } *)a2;
- (BOOL)isEqualToHIDServiceInfo:(id)a0;

@end
