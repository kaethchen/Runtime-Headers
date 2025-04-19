@class NSString, NSMutableDictionary;

@interface IFSecEquivalence : NSObject {
    NSMutableDictionary *_filesList;
    NSString *_alternateRoot;
}

+ (id)normalizePath:(id)a0;
+ (BOOL)shouldAddPath:(id)a0 withInstallRoot:(id)a1 withFSObject:(struct _BOMFSObject { } *)a2;

- (void)dealloc;
- (struct __SecTrustedApplication { } *)applicationSecRefForPath:(id)a0;
- (void)gatherApplicationSecRefsForPaths:(id)a0;
- (id)initWithTargetVolume:(id)a0;
- (void)setApplicationSecRef:(struct __SecTrustedApplication { } *)a0 forPath:(id)a1;
- (void)updateEquivalentSecRefForPaths;

@end
