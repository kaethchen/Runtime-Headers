@class NSString;

@interface PGResourceManagerDeserializationContext : NSObject <MTLDeserializationContext> {
    void *_resourceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)functionWithFunctionRef:(unsigned long long)a0;
- (id)initWithResourceManager:(void *)a0;

@end
