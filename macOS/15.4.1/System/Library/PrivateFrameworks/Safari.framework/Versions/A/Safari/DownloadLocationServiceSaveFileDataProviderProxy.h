@class NSString;

@interface DownloadLocationServiceSaveFileDataProviderProxy : NSObject <DownloadLocationServiceSaveFileDataProvider>

@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)getFileDataWithFormat:(int)a0 completionHandler:(id /* block */)a1;

@end
