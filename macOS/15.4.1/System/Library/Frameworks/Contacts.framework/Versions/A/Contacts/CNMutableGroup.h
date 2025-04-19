@class CNGroup, NSString, NSData, NSDate;

@interface CNMutableGroup : CNGroup

@property (copy) NSString *externalURI;
@property (copy) NSString *externalIdentifier;
@property (copy) NSData *externalRepresentation;
@property (copy) NSString *externalModificationTag;
@property (copy) NSString *externalUUID;
@property (copy) NSString *identifier;
@property int iOSLegacyIdentifier;
@property (copy) NSDate *creationDate;
@property (copy) NSDate *modificationDate;
@property (copy, nonatomic) CNGroup *snapshot;
@property (copy) NSString *name;

- (id)copy;
- (id)name;
- (id)identifier;
- (void)setName:(id)a0;
- (void)setIdentifier:(id)a0;
- (id)externalRepresentation;
- (id)modificationDate;
- (id)creationDate;
- (void)setSnapshot:(id)a0;
- (void)setCreationDate:(id)a0;
- (id)freeze;
- (void)setModificationDate:(id)a0;
- (id)externalIdentifier;
- (void)setExternalIdentifier:(id)a0;
- (int)iOSLegacyIdentifier;
- (void)setExternalModificationTag:(id)a0;
- (void)setExternalUUID:(id)a0;
- (void)setIOSLegacyIdentifier:(int)a0;
- (id)freezeWithSelfAsSnapshot;
- (void)setExternalURI:(id)a0;
- (void)adoptValuesFromAndSetSnapshot:(id)a0;
- (id)externalModificationTag;
- (id)externalUUID;
- (void)setExternalRepresentation:(id)a0;

@end
