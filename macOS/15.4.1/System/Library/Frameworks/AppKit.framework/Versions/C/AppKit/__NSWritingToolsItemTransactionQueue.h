@class NSEnumerator, _NSWritingToolsData;

@interface __NSWritingToolsItemTransactionQueue : NSObject {
    NSEnumerator *_enumerator;
    _NSWritingToolsData *_writingToolsData;
    id /* block */ _handler;
    id /* block */ _completionHandler;
}

- (void).cxx_destruct;

@end
