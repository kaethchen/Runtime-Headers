@protocol CNRetryDelegate;

@interface CNRetry : NSObject

@property (readonly, weak) id<CNRetryDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)performAndWait:(id /* block */)a0;

@end
