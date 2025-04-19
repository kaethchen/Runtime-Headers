@protocol CNAccountsPersistentStackDescription;

@interface CNAccountsPersistentStackDescriptionFactory : NSObject {
    void /* unknown type, empty encoding */ currentUserStackCache;
    void /* unknown type, empty encoding */ $__lazy_storage_$_updateWatcher;
}

@property (class, nonatomic, readonly) CNAccountsPersistentStackDescriptionFactory *sharedFactory;

@property (nonatomic, readonly) id<CNAccountsPersistentStackDescription> stackForCurrentUser;
@property (nonatomic, readonly) id<CNAccountsPersistentStackDescription> inProcessStackForCurrentUser;

- (id)init;
- (void).cxx_destruct;

@end
