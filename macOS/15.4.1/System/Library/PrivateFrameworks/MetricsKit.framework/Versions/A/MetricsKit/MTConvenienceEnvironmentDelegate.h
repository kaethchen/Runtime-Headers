@interface MTConvenienceEnvironmentDelegate : MTEnvironmentStoreDelegate

@property (copy) id /* block */ _pageURLBlock;
@property (copy) id /* block */ _resourceRevNumBlock;
@property (copy) id /* block */ _hostAppBlock;

- (id)init;
- (void).cxx_destruct;
- (id)hostApp;
- (id)pageUrl;
- (id)initWithPageURLBlock:(id /* block */)a0 resourceRevNumBlock:(id /* block */)a1 hostAppBlock:(id /* block */)a2;
- (id)resourceRevNum;

@end
