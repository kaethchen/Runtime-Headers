@class SSDataDetectorResultGenerator;

@interface SPKDataDetectorsStoreQuery : SPKQuery {
    SSDataDetectorResultGenerator *_generator;
}

+ (unsigned int)searchDomain;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;

@end
