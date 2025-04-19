@interface _NSDocumentActivity : _NSDocumentSerializationObject {
    BOOL _cachedCancellationHandlerResponse;
}

@property (copy) id /* block */ cancellationHandler;
@property (getter=isCancelled) BOOL cancelled;

- (void).cxx_destruct;
- (void)cancelAndFinishAsynchronously:(BOOL *)a0;

@end
