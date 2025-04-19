@class NSString, NSMutableDictionary, NSOperationQueue;
@protocol ABMetadataInfoFileDelegate;

@interface ABMetadataInfoFile : NSObject {
    NSMutableDictionary *_dictionary;
    NSString *_path;
    NSOperationQueue *_queue;
    BOOL _isDirty;
    id<ABMetadataInfoFileDelegate> _delegate;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isDirty;
- (void)save;
- (void)setInfo:(id)a0 forKey:(id)a1;
- (void)assertCalledOnMetadataQueue:(const char *)a0;
- (void)assertProperTypeForObject:(id)a0 key:(id)a1;
- (id)dictionaryAtPath:(id)a0;
- (id)fixUnexpectedDataTypes:(id)a0;
- (id)infoDictionaryAtPath:(id)a0;
- (id)infoForKey:(id)a0;
- (id)initWithPath:(id)a0 queue:(id)a1 delegate:(id)a2;
- (BOOL)isNoSuchFileError:(id)a0;
- (void)removeInfoForKey:(id)a0;
- (BOOL)shouldRebuildDueToFileSize:(id)a0;

@end
