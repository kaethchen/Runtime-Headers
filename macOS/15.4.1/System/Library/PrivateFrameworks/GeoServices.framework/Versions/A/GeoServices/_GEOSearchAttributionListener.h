@class NSString, NSMutableArray;

@interface _GEOSearchAttributionListener : NSObject {
    NSMutableArray *_completionHandlers;
    NSMutableArray *_errorHandlers;
}

@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)handleError:(id)a0;
- (void)addCompletionHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)handleInfo:(id)a0;

@end
