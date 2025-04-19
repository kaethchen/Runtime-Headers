@class TSPComponentParser, NSString, NSObject, TSPRegistry;
@protocol OS_dispatch_queue, TSPSpotlightReaderDelegate;

@interface TSPSpotlightComponentReader : NSObject <TSPComponentParserDelegate> {
    NSObject<OS_dispatch_queue> *_readerQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

@property (weak, nonatomic) id<TSPSpotlightReaderDelegate> delegate;
@property (readonly, nonatomic) TSPRegistry *registry;
@property (readonly, nonatomic) TSPComponentParser *componentParser;
@property (nonatomic) BOOL hasReadFailure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)didReadMessage:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0;
- (BOOL)componentParser:(id)a0 didReadArchiveInfo:(const void *)a1 stream:(struct DispatchDataInputStream { void /* function */ **x0; id x1; unsigned long long x2; unsigned long long x3; id x4; unsigned long long x5; char *x6; } *)a2 error:(id *)a3;
- (id)initWithDelegate:(id)a0 registry:(id)a1;
- (BOOL)readDocumentAtURL:(id)a0 error:(id *)a1;

@end
