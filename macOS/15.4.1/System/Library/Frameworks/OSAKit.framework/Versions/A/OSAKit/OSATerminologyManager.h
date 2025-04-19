@class NSMutableSet;

@interface OSATerminologyManager : NSObject {
    NSMutableSet *_terms;
}

+ (id)sharedTerminologyManager;

- (void)dealloc;
- (id)init;
- (void)setTerms:(id)a0;
- (id)terms;
- (id)_cachePath;
- (id)_pathForTerminologyCacheFile;
- (void)_writeTerms;
- (void)addTerms:(id)a0;
- (void)readTerms;
- (void)writeTerms;

@end
