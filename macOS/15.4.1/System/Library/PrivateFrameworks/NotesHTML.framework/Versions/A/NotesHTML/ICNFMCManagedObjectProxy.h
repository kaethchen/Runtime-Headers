@class NSManagedObjectID, NSString, NSManagedObject, NSManagedObjectContext;

@interface ICNFMCManagedObjectProxy : NSObject <ICNFMCChanging> {
    NSManagedObjectContext *_context;
    NSManagedObject *_managedObject;
}

@property (readonly) NSManagedObjectID *objectID;
@property BOOL isChanging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithManagedObject:(id)a0;
- (void)beginChanging;
- (BOOL)endChanging:(BOOL)a0 immediately:(BOOL)a1;
- (void)_handleObjectDeletion:(id)a0;
- (id)proxiedValueForKey:(id)a0;
- (void)setProxiedValue:(id)a0 forKey:(id)a1;

@end
