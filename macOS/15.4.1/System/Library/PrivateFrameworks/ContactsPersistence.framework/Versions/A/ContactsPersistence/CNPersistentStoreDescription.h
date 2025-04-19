@class NSString, NSManagedObjectModel, CNFuture;

@interface CNPersistentStoreDescription : NSObject {
    CNFuture *_modelFuture;
    CNFuture *_XPCServerModelFuture;
}

@property (readonly, copy) NSString *modelName;
@property (readonly) NSManagedObjectModel *model;
@property (readonly) NSManagedObjectModel *XPCServerModel;
@property (readonly) unsigned long long dataType;
@property (readonly) float version;

+ (id)addressBookStoreDescription;
+ (void)adjustContactsModelForInaccessibleNotes:(id)a0;
+ (id)bundleForName:(id)a0;
+ (id)exchangeSyncStoreDescription;
+ (id)modelFutureWithName:(id)a0;
+ (id)modelUrlForName:(id)a0;

- (void).cxx_destruct;
- (id)initWithModelName:(id)a0 dataType:(unsigned long long)a1 version:(float)a2;

@end
