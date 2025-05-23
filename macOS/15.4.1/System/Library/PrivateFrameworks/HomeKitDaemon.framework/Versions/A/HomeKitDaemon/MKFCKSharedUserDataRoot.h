@class NSString, NSUUID, NSData, NSSet, MKFCKSharedUserPhoto;

@interface MKFCKSharedUserDataRoot : MKFCKSharedUserData <HMDCoreDataCloudTransformable>

@property (nonatomic, copy) NSData *matCredIPKExternalRepresentation;
@property (nonatomic) BOOL activityNotificationsEnabledForPersonalRequests;
@property (nonatomic) BOOL allowExplicitContent;
@property (nonatomic) BOOL allowiTunesAccount;
@property (nonatomic) BOOL dolbyAtmosEnabled;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *iCloudAltDSID;
@property (copy, nonatomic) NSString *lastName;
@property (nonatomic) BOOL losslessMusicEnabled;
@property (retain, nonatomic) NSData *matCredIPKExternalRepresentation;
@property (copy, nonatomic) NSUUID *photosPersonDataZoneUUID;
@property (nonatomic) BOOL playbackInfluencesEnabled;
@property (nonatomic) BOOL sharePhotosFaceClassifications;
@property (nonatomic) BOOL siriIdentifyVoiceEnabled;
@property (retain, nonatomic) MKFCKSharedUserPhoto *aaProfilePhoto;
@property (retain, nonatomic) NSSet *accessorySettings;
@property (retain, nonatomic) NSSet *personsFromPhotos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (BOOL)_importInsertOrUpdateWithObjectID:(id)a0 context:(id)a1;
+ (id)createWithHomeModelID:(id)a0 persistentStore:(id)a1 context:(id)a2;
+ (id)entityDescriptionFromContext:(id)a0;
+ (BOOL)exportDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)exportInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)exportUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)importDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)importInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)importUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (id)rootKeyPath;

- (BOOL)_importSharedUserProfileMetadataIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)_importSharedUserSettingsIntoLocalModel:(id)a0 context:(id)a1;
- (id)fetchEquivalentModels:(id *)a0;
- (BOOL)importAccessorySettingsIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)importIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)importIntoLocalModelWithContext:(id)a0;
- (BOOL)importPersonsIntoLocalModel:(id)a0 context:(id)a1;

@end
