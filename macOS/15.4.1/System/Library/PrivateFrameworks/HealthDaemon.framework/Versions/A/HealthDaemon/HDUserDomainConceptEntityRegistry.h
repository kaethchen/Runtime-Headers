@class NSDictionary, HDDaemon;

@interface HDUserDomainConceptEntityRegistry : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_lock_typeIdentifierToEntityClass;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;

+ (id)sharedInstance;
+ (void)_setSharedInstance:(id)a0;
+ (id)registryWithDaemon:(id)a0 setSharedInstance:(BOOL)a1;
+ (void)unitTesting_setSharedInstance:(id)a0;

- (void).cxx_destruct;
- (id)initWithDaemon:(id)a0;
- (id)_builtinUserDomainConceptEntityClasses;
- (void)_lock_loadUserDomainConceptEntities;
- (void)_registerUserDomainConceptClassesFromProvider:(id)a0 classRegistry:(id)a1;
- (id)_registeredUserDomainConceptEntityClasses;
- (id)registeredDictionaryOfEntities;
- (id)registeredUserDomainConceptEntityClasses;
- (Class)userDomainConceptEntityClassForTypeIdentifier:(id)a0;

@end
