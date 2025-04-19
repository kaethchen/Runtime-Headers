@class NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsBlockCondition : MapsSuggestionsBaseCondition {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
}

- (void).cxx_destruct;
- (BOOL)isTrue;
- (id)initWithName:(id)a0 block:(id /* block */)a1;
- (id)initWithName:(id)a0 queue:(id)a1 block:(id /* block */)a2;

@end
