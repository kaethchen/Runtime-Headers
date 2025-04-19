@class NSOperationQueue;

@interface IMBrandManager : NSObject

@property (retain, nonatomic) NSOperationQueue *brandFetchQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)brandWithURI:(id)a0 completion:(id /* block */)a1;
- (void)brandWithURI:(id)a0 forType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)brandWithURI:(id)a0 usingSim:(id)a1 forType:(unsigned long long)a2 completion:(id /* block */)a3;

@end
