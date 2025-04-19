@class NSError;

@interface RUIInternalResourceLoader : NSObject {
    void /* unknown type, empty encoding */ _resources;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (class, nonatomic, readonly) RUIInternalResourceLoader *shared;

- (id)init;
- (void).cxx_destruct;
- (void)loadWithCompletionHandler:(void (^)(NSError *))a0;

@end
