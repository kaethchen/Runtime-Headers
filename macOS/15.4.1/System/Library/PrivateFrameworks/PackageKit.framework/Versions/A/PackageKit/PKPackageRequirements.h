@class NSString, NSCache, NSMutableDictionary;

@interface PKPackageRequirements : NSObject {
    NSString *_identifier;
    NSString *_destinationPath;
    NSCache *_onDiskHashCache;
    NSMutableDictionary *_actualPathByComponentIdent;
}

- (void)dealloc;
- (id)initWithPackageIdentifier:(id)a0 destination:(id)a1;
- (BOOL)metForPackageInfo:(id)a0 returningError:(id *)a1;
- (id)_checkDigestsForComponent:(id)a0 allPaths:(BOOL)a1;
- (id)_encodedDigestForOnDiskFile:(id)a0;
- (BOOL)_metForPackageData:(id)a0 returningError:(id *)a1;
- (id)actualPathForComponentIdentifier:(id)a0;
- (id)currentDigestForFile:(id)a0;
- (void)setActualPath:(id)a0 forComponentIdentifier:(id)a1;

@end
