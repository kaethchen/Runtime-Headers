@class NSString, UTType, NSArray, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface MEByteSource : NSObject {
    struct OpaqueFigPluginByteSource { } *_figPluginByteSource;
}

@property (readonly, nonatomic) struct OpaqueMTPluginByteSource { } *mtPluginByteSource;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *validatorConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *validatorQueue;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) UTType *contentType;
@property (readonly, nonatomic) long long fileLength;
@property (readonly, nonatomic) NSArray *relatedFileNamesInSameDirectory;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)availableLengthAtOffset:(long long)a0;
- (id)byteSourceForRelatedFileName:(id)a0 error:(id *)a1;
- (id)initWithMTPluginByteSource:(struct OpaqueMTPluginByteSource { } *)a0;
- (id)initWithRelatedFile:(id)a0 forByteSource:(id)a1 error:(id *)a2;
- (void)readDataOfLength:(unsigned long long)a0 fromOffset:(long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)readDataOfLength:(unsigned long long)a0 fromOffset:(long long)a1 toDestination:(void *)a2 bytesRead:(unsigned long long *)a3 error:(id *)a4;
- (void)readDataOfLength:(unsigned long long)a0 fromOffset:(long long)a1 toDestination:(void *)a2 completionHandler:(id /* block */)a3;
- (id)requestDirectoryFileNames;
- (void)startServiceConnection;

@end
