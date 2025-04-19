@class NSString, NSMutableArray;

@interface ICNFIMAPDownloadCache : NSObject <ICNFIMAPFetchResponseHandler> {
    NSMutableArray *_downloads;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_findRangeOrInsertionPointForDownloadsWithUid:(unsigned int)a0;
- (id)_getDownloadForUid:(unsigned int)a0 partSectionSpecifier:(id)a1 textSectionSpecifier:(long long)a2 length:(unsigned int)a3 estimatedLength:(unsigned int)a4;
- (void)_lockedAddDownload:(id)a0 atIndex:(unsigned long long)a1 forUid:(unsigned int)a2;
- (void)_lockedUpdateDownloadsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fetchResults:(id)a1 error:(id)a2;
- (void)addCommandsForDownload:(id)a0 toPipeline:(id)a1;
- (void)addDownload:(id)a0 forUid:(unsigned int)a1;
- (void)cleanUpDownloadsForUid:(unsigned int)a0;
- (id)downloadForMessage:(id)a0;
- (id)downloadForUid:(unsigned int)a0 partSectionSpecifier:(id)a1 textSectionSpecifier:(long long)a2 expectedLength:(unsigned int)a3;
- (id)downloadForUid:(unsigned int)a0 partSectionSpecifier:(id)a1 textSectionSpecifier:(long long)a2 length:(unsigned int)a3;
- (void)handleFetchResponse:(id)a0 forUid:(unsigned int)a1;
- (void)handleFetchResponses:(id)a0;
- (void)processResultsForUid:(unsigned int)a0;
- (BOOL)handleResponse:(id)a0 forOperation:(id)a1;

@end
