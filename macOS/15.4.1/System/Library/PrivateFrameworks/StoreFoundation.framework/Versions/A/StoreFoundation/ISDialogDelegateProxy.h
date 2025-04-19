@class NSObject;
@protocol OS_dispatch_queue, ISDialogDelegate;

@interface ISDialogDelegateProxy : NSObject <ISDialogDelegate>

@property (retain) id<ISDialogDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)dialog:(id)a0 shouldDismissWithReturnCode:(long long)a1 replyBlock:(id /* block */)a2;

@end
