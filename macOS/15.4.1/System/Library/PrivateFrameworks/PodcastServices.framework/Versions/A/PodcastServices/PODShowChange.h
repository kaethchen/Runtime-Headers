@class NSString, PODShowChangeEntityData;

@interface PODShowChange : PODContentChange <PODSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long showSyncID;
@property (readonly, nonatomic) PODShowChangeEntityData *entityData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)entityDataClass;
+ (id)deleteWithShowSyncID:(long long)a0;
+ (id)insertWithShowEntityData:(id)a0;
+ (id)updateWithShowEntityData:(id)a0;


@end
