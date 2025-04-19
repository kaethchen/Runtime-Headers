@interface _NSDocumentBasicAsyncOperation : NSOperation {
    _Atomic BOOL _readying;
    _Atomic BOOL _ready;
}

- (id)init;
- (void)finish;
- (BOOL)isReady;

@end
