@class NSString, NSURL, NSSet;

@interface PLFileSystemVolume : PLManagedObject {
    NSURL *_url;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *volumeUuidString;
@property (copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isOffline;
@property (retain, nonatomic) NSSet *resources;

+ (id)entityName;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)volumeForURL:(id)a0 context:(id)a1;
+ (id)predictedURLForVolumeName:(id)a0;
+ (id)volumeForObjectUUID:(id)a0 context:(id)a1;
+ (id)volumeForVolumeUUID:(id)a0 context:(id)a1;

- (void).cxx_destruct;
- (void)awakeFromInsert;
- (void)awakeFromFetch;
- (void)didTurnIntoFault;
- (void)willTurnIntoFault;
- (void)unregisterWithVolumeManager;
- (void)_registerWithVolumeManager;
- (void)_unregisterWithVolumeManager;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;
- (id)predictedURL;
- (BOOL)supportsCloudUpload;

@end
