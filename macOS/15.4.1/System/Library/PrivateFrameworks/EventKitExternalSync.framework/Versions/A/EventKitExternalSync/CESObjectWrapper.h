@class CESCalStoreSource, NSString, NSMutableDictionary, CESEntityWrapper, EKObject;

@interface CESObjectWrapper : NSObject {
    NSMutableDictionary *_syncData;
    NSString *_initialID;
}

@property (readonly) CESEntityWrapper *entity;
@property (readonly) EKObject *ekObject;
@property BOOL isNew;
@property (readonly) CESCalStoreSource *store;
@property (readonly) NSString *recordID;
@property (readonly) NSMutableDictionary *syncData;

+ (id)wrapping:(id)a0 ofType:(id)a1;

- (void).cxx_destruct;
- (BOOL)save;
- (BOOL)commit:(id *)a0;
- (BOOL)deleteEKObject;
- (void)fillSyncDict;
- (id)initOnObject:(id)a0 ofType:(id)a1;
- (BOOL)keepFromServer;
- (BOOL)modifyUsingSyncData:(id)a0;
- (BOOL)modifyUsingSyncData:(id)a0 record:(id)a1;

@end
