@class NSError;

@interface PLResultFailure : PLResult {
    NSError *_error;
}

- (id)description;
- (void).cxx_destruct;
- (id)error;
- (id)initWithError:(id)a0;
- (id)result;
- (id)resultWithError:(id *)a0;
- (BOOL)isSuccess;
- (BOOL)isFailure;

@end
