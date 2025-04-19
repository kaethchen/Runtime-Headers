@class NSMutableArray;

@interface ICNFIMAPCommandPipeline : NSObject

@property (nonatomic) unsigned int chunkSize;
@property (nonatomic) unsigned int expectedSize;
@property (nonatomic) BOOL isSending;
@property (readonly, nonatomic) BOOL isFull;
@property (retain, nonatomic) NSMutableArray *fetchUnits;
@property (readonly, nonatomic) id imapCommandPipelineLock;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_removeFetchUnitMatchingResponse:(id)a0;
- (void)addFetchCommandForUid:(unsigned int)a0 fetchItem:(id)a1 expectedLength:(unsigned int)a2;
- (id)_newOperationsAssigningResponseHandler:(id)a0;
- (id)failureResponsesFromSendingCommandsWithGateway:(id)a0 responseHandler:(id)a1 highPriority:(BOOL)a2;

@end
