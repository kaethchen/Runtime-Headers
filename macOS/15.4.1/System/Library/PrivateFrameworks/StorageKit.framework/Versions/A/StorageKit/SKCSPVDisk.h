@class NSString;

@interface SKCSPVDisk : SKDisk

@property (retain) NSString *csDiskUUID;
@property (retain) NSString *csLVGUUID;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (id)minimalDictionaryRepresentation;
- (BOOL)canResize;
- (id)innerDescriptionWithPrivateData:(BOOL)a0;
- (id)logicalVolumeGroup;
- (BOOL)matchesDictionary:(id)a0;

@end
