@class NSString;

@interface SKAPFSSnapshotDisk : SKAPFSDisk {
    NSString *_apfsUUID;
}

@property (retain) NSString *snapshotName;
@property long long sealStatus;
@property (retain) NSString *apfsUUID;
@property (readonly) NSString *snapshotUUID;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)a0;
- (id)minimalDictionaryRepresentation;
- (id)innerDescriptionWithPrivateData:(BOOL)a0;

@end
