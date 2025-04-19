@interface VCPHomeKitAnalysisService : NSObject

+ (id)analysisService;

- (id)init;
- (void)cancelRequest:(int)a0;
- (void)cancelAllRequests;
- (int)requestAnalysis:(unsigned long long)a0 ofAssetData:(id)a1 withProperties:(id)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (int)requestAnalysis:(unsigned long long)a0 ofAssetSurface:(id)a1 withProperties:(id)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (int)requestResidentMaintenanceWithOptions:(id)a0 andCompletionHandler:(id /* block */)a1;

@end
