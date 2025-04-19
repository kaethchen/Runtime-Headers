@class NSError;

@interface AMSPromiseResult : NSObject

@property (copy) NSError *error;
@property (retain) id result;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0 error:(id)a1;

@end
