@interface UIUModelFetcherCompat : NSObject {
    void /* unknown type, empty encoding */ log;
    void /* unknown type, empty encoding */ uiuModelLocator;
    void /* unknown type, empty encoding */ mindnetPortrait;
    void /* unknown type, empty encoding */ mindnetSquare;
    void /* unknown type, empty encoding */ elementDetectionTV;
    void /* unknown type, empty encoding */ clickabilityPortrait;
    void /* unknown type, empty encoding */ clickabilitySquare;
    void /* unknown type, empty encoding */ iconClassification;
    void /* unknown type, empty encoding */ screenSimilarityPortrait;
    void /* unknown type, empty encoding */ screenSimilaritySquare;
    void /* unknown type, empty encoding */ focusElement;
}

+ (id)sharedFetcher;

- (id)init;
- (void).cxx_destruct;
- (BOOL)areAssetsPresent;
- (BOOL)startAssetDownloadWithModelSet:(long long)a0 timeout:(double)a1;

@end
