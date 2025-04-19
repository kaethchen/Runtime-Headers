@class _ANEProgramForEvaluation, NSString, NSDictionary, NSURL, NSUUID, _ANEProgramIOSurfacesMapper;

@interface _ANEModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *modelAttributes;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic) char queueDepth;
@property (nonatomic) unsigned long long intermediateBufferHandle;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } l;
@property (retain, nonatomic) _ANEProgramForEvaluation *program;
@property (nonatomic) unsigned int perfStatsMask;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) _ANEProgramIOSurfacesMapper *mapper;
@property (nonatomic) unsigned long long string_id;
@property (copy, nonatomic) NSString *cacheURLIdentifier;
@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) NSURL *modelURL;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) long long identifierSource;

+ (id)new;
+ (id)modelAtURL:(id)a0 key:(id)a1;
+ (id)modelAtURLWithSourceURL:(id)a0 sourceURL:(id)a1 key:(id)a2 cacheURLIdentifier:(id)a3;
+ (id)modelWithCacheURLIdentifier:(id)a0;
+ (id)modelAtURL:(id)a0 key:(id)a1 modelAttributes:(id)a2;
+ (id)correctFileURLFormat:(id)a0;
+ (id)modelAtURLWithCacheURLIdentifier:(id)a0 key:(id)a1 cacheURLIdentifier:(id)a2;
+ (id)modelAtURLWithSourceURL:(id)a0 sourceURL:(id)a1 key:(id)a2 identifierSource:(long long)a3 cacheURLIdentifier:(id)a4;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getUUID;
- (id)getCacheURLIdentifier;
- (BOOL)isEqualToModel:(id)a0;
- (id)procedureInfoForProcedureIndex:(unsigned int)a0;
- (id)initWithModelAtURL:(id)a0 key:(id)a1 identifierSource:(long long)a2 cacheURLIdentifier:(id)a3 modelAttributes:(id)a4 standardizeURL:(BOOL)a5;
- (id)initWithModelAtURL:(id)a0 sourceURL:(id)a1 UUID:(id)a2 key:(id)a3 identifierSource:(long long)a4 cacheURLIdentifier:(id)a5 modelAttributes:(id)a6 standardizeURL:(BOOL)a7 string_id:(unsigned long long)a8 generateNewStringId:(BOOL)a9;
- (id)initWithModelIdentifier:(id)a0;
- (id)inputSymbolIndicesForProcedureIndex:(unsigned int)a0;
- (id)outputSymbolIndicesForProcedureIndex:(unsigned int)a0;
- (void)resetOnUnload;
- (id)shallowCopy;
- (id)symbolIndicesForProcedureIndex:(unsigned int)a0 indexArrayKey:(id)a1;
- (void)updateModelAttributes:(id)a0 state:(unsigned long long)a1;
- (void)updateModelAttributes:(id)a0 state:(unsigned long long)a1 programHandle:(unsigned long long)a2 intermediateBufferHandle:(unsigned long long)a3 queueDepth:(char)a4;

@end
