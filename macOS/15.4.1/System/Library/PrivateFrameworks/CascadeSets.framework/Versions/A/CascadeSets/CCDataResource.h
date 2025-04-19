@class NSURL, BMResourceSpecifier, BMResourceContainer;

@interface CCDataResource : NSObject <NSCopying>

@property (readonly, nonatomic) BMResourceSpecifier *specifier;
@property (readonly, nonatomic) BMResourceContainer *container;
@property (readonly, nonatomic) NSURL *resourceDirectoryURL;
@property (readonly, nonatomic) NSURL *databaseDirectoryURL;
@property (readonly, nonatomic) NSURL *databaseURL;

+ (id)dataResourceForSet:(id)a0 inContainer:(id)a1;
+ (id)_databaseDirectoryURLFromResourceDirectoryURL:(id)a0;
+ (id)dataResourceFromSpecifier:(id)a0 inContainer:(id)a1;
+ (BOOL)databaseExistsAtURL:(id)a0;
+ (id)databaseURLFromParentDirectoryURL:(id)a0;
+ (BOOL)directoryContainsDataResource:(id)a0;
+ (BOOL)enumerateDataResources:(id *)a0 setIdentifier:(id)a1 descriptors:(id)a2 container:(id)a3 includingTombstoned:(BOOL)a4 usingBlock:(id /* block */)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)clearTombstoneStatus:(id *)a0;
- (id)initWithSpecifier:(id)a0 container:(id)a1 resourceDirectoryURL:(id)a2;
- (BOOL)markTombstoned:(id)a0 error:(id *)a1;
- (unsigned char)resourceStatus;
- (id)setWithError:(id *)a0;
- (id)tombstoneDate:(id *)a0;

@end
