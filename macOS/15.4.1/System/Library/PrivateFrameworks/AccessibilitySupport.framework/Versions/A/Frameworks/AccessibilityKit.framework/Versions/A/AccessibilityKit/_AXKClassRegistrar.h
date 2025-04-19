@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _AXKClassRegistrar : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *classMap;
@property (retain, nonatomic) NSMutableDictionary *predicateMap;
@property (nonatomic) Class baseClass;

- (id)init;
- (void).cxx_destruct;
- (id)_registerControllerClassPreflight:(Class)a0 applicationIdentifier:(id)a1 role:(id)a2 subrole:(id)a3 predicate:(id /* block */)a4;
- (Class)controllerClassForElement:(id)a0;
- (void)registerControllerBaseClass:(Class)a0;
- (void)registerControllerClass:(Class)a0 applicationIdentifier:(id)a1 role:(id)a2 subrole:(id)a3 predicate:(id /* block */)a4;

@end
