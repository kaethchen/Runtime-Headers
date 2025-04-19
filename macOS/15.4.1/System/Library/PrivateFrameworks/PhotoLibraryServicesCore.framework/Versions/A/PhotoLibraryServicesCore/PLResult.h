@class NSError;

@interface PLResult : NSObject

@property (readonly) id result;
@property (readonly, copy) NSError *error;
@property (readonly) BOOL isSuccess;
@property (readonly) BOOL isFailure;

+ (id)failureWithError:(id)a0;
+ (id)successWithResult:(id)a0;

- (id)description;
- (id)resultWithError:(id *)a0;
- (id)resultByWrappingUnderlyingErrorWithDomain:(id)a0 code:(long long)a1 debugDescription:(id)a2;
- (id)initForSubclasses;

@end
