@class NSString;

@interface NRDRemoteableBlock : NSObject <NRDRemoteableBlockInterface> {
    id /* block */ _block;
    id /* block */ _progressBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)execute:(id /* block */)a0;
- (id)initWithProgressBlock:(id /* block */)a0;
- (void)progress:(id)a0;

@end
