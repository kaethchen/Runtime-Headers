@class PFModule;

@interface PFCommon : NSObject <PFMeta, PFFileEnumerator> {
    PFModule *_module;
}

+ (id)allPackageFileTypes;
+ (BOOL)fileTypeIsSupported:(id)a0;

- (void)dealloc;
- (id)init;
- (id)name;
- (id)identifier;
- (id)version;
- (id)groups;
- (id)location;
- (void)skipDescendents;
- (id)dependencies;
- (id)title;
- (id)information;
- (id)moduleType;
- (BOOL)validateContents:(id *)a0;
- (void)releaseFileData;
- (id)validatedDigest;
- (char *)_resolvedFSPathForBomPath:(const char *)a0;
- (id)catalogInfo;
- (id)certificateIdentity;
- (id)digestOfType:(id)a0;
- (struct _BOMFSObject { } *)fileAtPath:(const char *)a0;
- (BOOL)initFileEnumerator;
- (id)installPlan;
- (struct _BOMFSObject { } *)nextFile;
- (id)objectForKey:(id)a0 localization:(id)a1;
- (id)packageFileTypes;
- (void)resetFileEnumerator;
- (id)searchDefinitions;
- (id)taints;

@end
