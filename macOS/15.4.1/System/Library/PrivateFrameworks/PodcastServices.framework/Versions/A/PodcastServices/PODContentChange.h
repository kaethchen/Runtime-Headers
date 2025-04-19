@class NSString, PODContentChangeEntityData;

@interface PODContentChange : NSObject <PODSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long entitySyncID;
@property (readonly, nonatomic) PODContentChangeEntityData *entityData;
@property (readonly, nonatomic) long long changeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)entityDataClass;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_entityDataAsEpisodeData;
- (id)_entityDataAsPlaylistData;
- (id)_entityDataAsShowArtworkData;
- (id)_entityDataAsShowData;
- (id)_episodePlayMetadata;
- (id)initWithChangeType:(long long)a0 entitySyncID:(long long)a1 entityData:(id)a2;
- (id)initWithDeletedEntitySyncID:(long long)a0;

@end
