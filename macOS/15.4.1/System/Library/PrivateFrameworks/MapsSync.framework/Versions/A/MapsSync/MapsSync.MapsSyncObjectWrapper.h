@interface MapsSync.MapsSyncObjectWrapper : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ _managedObjectID;
    void /* unknown type, empty encoding */ _entityName;
    void /* unknown type, empty encoding */ _editContext;
    void /* unknown type, empty encoding */ _callbackQueue;
}

@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
