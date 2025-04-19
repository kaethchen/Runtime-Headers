@class NSObject;
@protocol OS_dispatch_semaphore;

@interface SKCompletionHandler : NSObject

@property (readonly, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ errorBlock;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (readonly, nonatomic) const char *functionName;

- (void).cxx_destruct;
- (id)initWithCompletionBlock:(id /* block */)a0 progressBlock:(id /* block */)a1 function:(const char *)a2;

@end
