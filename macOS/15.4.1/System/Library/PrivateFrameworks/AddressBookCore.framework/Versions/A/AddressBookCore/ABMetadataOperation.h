@class NSString;
@protocol ABMetadataManager;

@interface ABMetadataOperation : NSOperation {
    NSString *_addressBookPath;
    BOOL _addressBookTracksAllSources;
}

@property (readonly) id<ABMetadataManager> metadataManager;

- (void).cxx_destruct;
- (unsigned long long)metadataJobType;
- (id)addressBookPath;
- (BOOL)addressBookTracksAllSources;
- (id)initWithMetadataManager:(id)a0;
- (BOOL)lockInfo;
- (void)markUniqueIdsAsCompleted:(id)a0;
- (void)markUniqueIdsAsPlanned:(id)a0;
- (void)markViewedForRecord:(id)a0 tryAgain:(BOOL)a1;
- (void)stamp;
- (void)unlockInfo;
- (void)validateAllMetaDataForceRebuild:(BOOL)a0;
- (void)writeMetadata:(id)a0 toURL:(id)a1;

@end
