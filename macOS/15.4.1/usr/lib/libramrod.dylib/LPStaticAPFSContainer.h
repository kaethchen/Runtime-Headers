@interface LPStaticAPFSContainer : LPStaticMedia

+ (id)supportedContentTypes;
+ (id)allAPFSContainers;
+ (id)diagsContainer;

- (id)prebootVolume;
- (id)volumes;
- (id)updateVolume;
- (id)physicalStores;
- (id)addVolumeWithName:(id)a0 role:(int)a1 caseSensitive:(BOOL)a2 reserveSize:(long long)a3 quotaSize:(long long)a4 pairedVolume:(id)a5 error:(id *)a6;
- (id)recoveryVolume;
- (id)volumesWithRole:(int)a0;

@end
