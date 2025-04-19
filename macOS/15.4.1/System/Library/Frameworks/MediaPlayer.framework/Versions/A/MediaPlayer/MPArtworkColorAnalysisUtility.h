@class NSOperationQueue, NSMapTable;

@interface MPArtworkColorAnalysisUtility : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSOperationQueue *artworkColorAnalysisOperationQueue;
@property (retain, nonatomic) NSMapTable *artworkColorAnalysisOperations;
@property (nonatomic) long long qualityOfService;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQualityOfService:(long long)a0;
- (void)cancelColorAnalysis:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)performColorAnalysisForImageAtUrl:(id)a0 preferredImageSize:(struct CGSize { double x0; double x1; })a1 completionHandler:(id /* block */)a2;

@end
