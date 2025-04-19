@class NSError, CNEither;

@interface CNResult : NSObject

@property (class, readonly) id /* block */ isSuccess;
@property (class, readonly) id /* block */ isFailure;

@property (readonly) CNEither *either;
@property (readonly) id value;
@property (readonly, copy) NSError *error;
@property (readonly) BOOL isSuccess;
@property (readonly) BOOL isFailure;

+ (id)failureWithError:(id)a0;
+ (id)resultWithBlock:(id /* block */)a0;
+ (id)resultWithFuture:(id)a0;
+ (id)resultWithFuture:(id)a0 timeout:(double)a1;
+ (id)resultWithValue:(id)a0 orError:(id)a1;
+ (id)successWithValue:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (id)initWithValue:(id)a0;
- (id)valueWithError:(id *)a0;
- (id)flatMap:(id /* block */)a0;
- (id)initWithValue:(id)a0 error:(id)a1;
- (id)map:(id /* block */)a0;
- (id)recover:(id /* block */)a0;

@end
