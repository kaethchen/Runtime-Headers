@class CUTResult;

@interface _CUTStaticPromise : CUTPromise {
    BOOL _safe;
}

@property (retain, nonatomic) CUTResult *result;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0 safe:(BOOL)a1;
- (void)registerResultBlock:(id /* block */)a0;
- (id)then:(id /* block */)a0;

@end
