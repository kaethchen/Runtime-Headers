@class PODShowArtworkChangeEntityData, NSString;

@interface PODShowArtworkChange : PODContentChange <PODSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long showSyncID;
@property (readonly, nonatomic) PODShowArtworkChangeEntityData *entityData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)entityDataClass;
+ (id)updateWithArtworkEntityData:(id)a0;


@end
