@class NSMutableDictionary;

@interface WBSReaderFontDownloadManager : NSObject {
    NSMutableDictionary *_fontFamilyToProgress;
}

@property (class, readonly, nonatomic) WBSReaderFontDownloadManager *sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)downloadFont:(id)a0;
- (double)downloadProgressForFont:(id)a0;
- (BOOL)hasOngoingRequestForFont:(id)a0;

@end
