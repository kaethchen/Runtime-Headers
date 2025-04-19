@class PFWeakContainer;

@interface _PFWeakContainerSentenal : NSObject {
    PFWeakContainer *_container;
}

+ (void)initialize;

- (oneway void)release;
- (void)dealloc;
- (id)initWithContainer:(id)a0;
- (void)clearContainer;
- (void)associateWithObject:(id)a0;
- (BOOL)isAssociatedWithObject:(id)a0;
- (void)removeAssociationWithObject:(id)a0;

@end
