@class SiriUIRequestOptions, NSMapTable;

@interface AFUIRequestTrigger : NSObject {
    NSMapTable *_observers;
}

@property (readonly, nonatomic) SiriUIRequestOptions *options;
@property (readonly, nonatomic) long long state;

- (void).cxx_destruct;
- (void)_updateState:(long long)a0;
- (void)addTriggerTarget:(id)a0 action:(SEL)a1;
- (id)initWithRequestOptions:(id)a0 updateHandle:(id /* block */ *)a1;
- (void)removeTriggerTarget:(id)a0;

@end
