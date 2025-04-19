@interface PLResultSuccess : PLResult {
    id _result;
}

- (id)description;
- (void).cxx_destruct;
- (id)error;
- (id)result;
- (id)resultWithError:(id *)a0;
- (id)initWithResult:(id)a0;
- (BOOL)isSuccess;
- (BOOL)isFailure;

@end
