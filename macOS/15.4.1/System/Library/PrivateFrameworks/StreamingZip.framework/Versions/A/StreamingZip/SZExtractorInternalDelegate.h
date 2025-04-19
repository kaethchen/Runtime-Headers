@protocol SZExtractorDelegate;

@interface SZExtractorInternalDelegate : NSObject <StreamingUnzipDelegateProtocol> {
    id<SZExtractorDelegate> delegate;
}

- (void).cxx_destruct;
- (void)extractionCompleteAtArchivePath:(id)a0;
- (void)extractionEnteredPassThroughMode;
- (void)setExtractionProgress:(double)a0;

@end
