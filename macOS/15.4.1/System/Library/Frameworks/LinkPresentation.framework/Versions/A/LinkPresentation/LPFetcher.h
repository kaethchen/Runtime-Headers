@class LPEvent;

@interface LPFetcher : NSObject

@property (retain, nonatomic) id userData;
@property (retain, nonatomic) Class responseClass;
@property (readonly, nonatomic) unsigned int _loggingID;
@property (retain, nonatomic) LPEvent *_event;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)fetchWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
