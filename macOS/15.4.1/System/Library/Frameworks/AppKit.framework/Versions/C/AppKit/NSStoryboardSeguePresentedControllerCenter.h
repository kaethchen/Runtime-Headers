@class NSMapTable;

@interface NSStoryboardSeguePresentedControllerCenter : NSObject

@property (retain) NSMapTable *registeredControllers;

+ (id)defaultCenter;

- (id)init;
- (void).cxx_destruct;
- (void)registerController:(id)a0 withOptions:(id)a1;
- (id)controllerWithIdentifier:(id)a0;
- (void)unregisterControllerWithOptions:(id)a0;

@end
