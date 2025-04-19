@class NSArray, _TtC7GameKit31GKGameActivityDefinitionSupport, NSError;

@interface GameKit.GKGameActivityDefinitionSupport : NSObject {
    void /* unknown type, empty encoding */ service;
}

@property (class, nonatomic, readonly) _TtC7GameKit31GKGameActivityDefinitionSupport *shared;

- (id)init;
- (void).cxx_destruct;
- (void)loadGameActivityDefinitionsWith:(NSArray *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)loadGameActivityDefinitionsWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;

@end
