@class NSURL, NSMutableDictionary;

@interface SMWindowsMacPathMapper : NSObject

@property (retain) NSMutableDictionary *encodedDomainToPathMap;
@property (retain) NSURL *dataContainerURL;

+ (id)basePathForDiskDomain:(id)a0;
+ (id)basePathForSharedDomain;
+ (id)loadMapperFromArchiveInDirectory:(id)a0 error:(id *)a1;
+ (id)pathForArchiveInDirectory:(id)a0;
+ (id)stringByDecodingFromDomainComponentString:(id)a0;
+ (id)stringByEncodingToDomainComponentString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isOtherDiskXMURLString:(id)a0 outName:(id *)a1;
- (id)userRelativePathForXMURLString:(id)a0;
- (id)basePathForDomainType:(id)a0 specifier:(id)a1 subtypes:(id)a2;
- (id)basePathForShortName:(id)a0;
- (id)basePathFromMailDomain:(id)a0 partialBase:(id)a1;
- (id)getEncodedDomainComponents:(id)a0 outEncodedDomain:(id *)a1 outPath:(id *)a2;
- (BOOL)isSharedFilesXMURLString:(id)a0;
- (void)mapShortname:(id)a0 toBasePath:(id)a1;
- (id)pathForDomainOfXMURLString:(id)a0;
- (id)pathForURL:(id)a0 userRelative:(BOOL)a1 domainPathOnly:(BOOL)a2;
- (id)pathForXMURLString:(id)a0;
- (void)redirectShortname:(id)a0 toShortname:(id)a1 orBasePath:(id)a2;
- (BOOL)saveToArchiveInDirectory:(id)a0 forUser:(unsigned int)a1 error:(id *)a2;
- (id)userShortnameForXMURLString:(id)a0;

@end
