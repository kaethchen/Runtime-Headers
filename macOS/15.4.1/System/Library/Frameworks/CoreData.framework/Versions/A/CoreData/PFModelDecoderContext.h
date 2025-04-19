@class NSManagedObjectModel, NSEntityDescription, NSMutableSet;

@interface PFModelDecoderContext : NSObject {
    NSManagedObjectModel *model;
    NSEntityDescription *entity;
    NSMutableSet *objectPool;
}

+ (void)assertNoContext;
+ (id)retainedContext;

- (void)dealloc;

@end
