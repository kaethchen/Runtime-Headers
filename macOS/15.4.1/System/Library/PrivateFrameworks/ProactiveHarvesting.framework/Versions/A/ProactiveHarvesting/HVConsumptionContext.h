@class HVHtmlParser, NSString, _PASLazyResult, NSObject;
@protocol BMIdentifiableContentEvent;

@interface HVConsumptionContext : NSObject {
    id /* block */ _scheduledTaskShouldContinueBlock;
    _PASLazyResult *_cachedParser;
}

@property (readonly, nonatomic) NSObject<BMIdentifiableContentEvent> *content;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) HVHtmlParser *htmlParser;

- (id)description;
- (void).cxx_destruct;
- (BOOL)shouldContinue;
- (id)_parseHtmlContentIfAvailable;
- (id)initWithContent:(id)a0 contentProtection:(id)a1 scheduledTaskShouldContinueBlock:(id /* block */)a2;

@end
