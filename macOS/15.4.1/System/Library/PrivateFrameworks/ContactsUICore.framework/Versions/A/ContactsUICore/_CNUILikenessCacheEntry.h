@class CNObservable;
@protocol CNCancelable;

@interface _CNUILikenessCacheEntry : NSObject

@property (readonly, nonatomic) CNObservable *provider;
@property (readonly, nonatomic) id<CNCancelable> cancelationToken;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0 cancelationToken:(id)a1;

@end
