@class NSString;

@interface ATXClientModelCacheFileHandler : NSObject <ATXClientModelCacheFileHandlerProtocol> {
    NSString *_cacheFileBasePath;
    NSString *_clientModelId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientModelIdFromFileName:(id)a0;
+ (id)readSuggestionsFromCacheFromReadOnlyFileHandle:(id)a0;
+ (id)unarchiveCacheFileFromReadOnlyFileHandle:(id)a0;

- (void).cxx_destruct;
- (id)cacheFilePath;
- (BOOL)writeSerializedDataToCacheFile:(id)a0;
- (BOOL)createCacheFileForClientModelCacheUpdate:(id)a0;
- (BOOL)deleteCachedSuggestionsFile;
- (id)initWithCacheFileBasePath:(id)a0 clientModelId:(id)a1;
- (id)readOnlyFileHandleForSuggestionsCache;
- (id)readSuggestionsFromCache;
- (id)serializeSuggestionsData:(id)a0;

@end
