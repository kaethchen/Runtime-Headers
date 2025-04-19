@class NSString, NSURL;

@interface SPTTRResult : SFSearchResult_SpotlightExtras {
    NSString *_userQuery;
    NSURL *_ttrURL;
}

- (void).cxx_destruct;
- (id)URL;
- (BOOL)allowsCPRecording;
- (id)cardForTTRResult;
- (id)compactCardForTTRResult;
- (id)initWithUserQuery:(id)a0 ttrURL:(id)a1;
- (BOOL)isTTR;
- (id)ttrImage;
- (void)updateURL;

@end
