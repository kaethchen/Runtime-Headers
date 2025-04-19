@class NSMutableDictionary;

@interface ASKEventHandlerRegistry : NSObject {
    NSMutableDictionary *_classes;
    NSMutableDictionary *_descriptions;
    NSMutableDictionary *_terminologies;
}

+ (void)load;
+ (id)sharedRegistry;
+ (void)setSharedRegistry:(id)a0;
+ (void)_forceLoadDescriptions;

- (void)dealloc;
- (id)init;
- (id)descriptions;
- (id)classes;
- (id)_classDescriptionForClassName:(id)a0;
- (BOOL)isEventHandlerName:(id)a0 supportedBy:(id)a1;
- (void)_loadDescriptionsForExistingBundles;
- (id)descriptionWithTerminologyName:(id)a0;
- (void)_loadDescriptionsForLoadedBundle:(id)a0;
- (void)addDescriptions:(id)a0 forClassName:(id)a1;
- (void)addExcludedEventHandlers:(id)a0 forClassName:(id)a1;
- (id)descriptionWithName:(id)a0;
- (id)descriptionWithName:(id)a0 forClassName:(id)a1;
- (id)descriptionWithName:(id)a0 forObject:(id)a1;
- (id)descriptionsForClass:(Class)a0;
- (id)descriptionsForClass:(Class)a0 includingSuperClasses:(BOOL)a1;
- (id)descriptionsForClassName:(id)a0;
- (id)descriptionsForClassName:(id)a0 includingSuperClasses:(BOOL)a1;
- (id)descriptionsForObject:(id)a0;
- (BOOL)isEventHandler:(id)a0 supportedBy:(id)a1;
- (void)loadDescriptionsFromBundle:(id)a0;
- (void)loadDescriptionsWithDictionary:(id)a0 fromBundle:(id)a1;
- (void)registerDescription:(id)a0 withClassName:(id)a1;
- (void)removeExcludedEventHandlersFormDescriptions:(id)a0 forClassName:(id)a1;
- (id)terminologies;

@end
