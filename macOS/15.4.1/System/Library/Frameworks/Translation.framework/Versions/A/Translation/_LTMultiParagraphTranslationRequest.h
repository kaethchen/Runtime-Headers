@class NSString, NSArray, NSMutableDictionary, _LTLocalePair, NSObject;
@protocol OS_dispatch_queue;

@interface _LTMultiParagraphTranslationRequest : NSObject {
    _LTLocalePair *_localePair;
    NSMutableDictionary *_completedResultMap;
    id /* block */ _completionHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSArray *paragraphRequests;

- (void).cxx_destruct;
- (void)_cleanUp;
- (void)_generateParagraphRequests;
- (id)initWithText:(id)a0 localePair:(id)a1 completionHandler:(id /* block */)a2;

@end
