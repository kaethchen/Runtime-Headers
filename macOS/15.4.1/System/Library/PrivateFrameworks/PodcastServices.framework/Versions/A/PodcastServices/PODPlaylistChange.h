@class NSString, PODPlaylistChangeEntityData;

@interface PODPlaylistChange : PODContentChange <PODSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long playlistSyncID;
@property (readonly, nonatomic) PODPlaylistChangeEntityData *entityData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)entityDataClass;
+ (id)deleteWithPlaylistSyncID:(long long)a0;
+ (id)insertWithPlaylistEntityData:(id)a0;
+ (id)updateWithPlaylistEntityData:(id)a0;


@end
