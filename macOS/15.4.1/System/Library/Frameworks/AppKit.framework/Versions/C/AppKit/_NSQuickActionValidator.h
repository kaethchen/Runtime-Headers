@class NSSet, NSMutableSet, _NSQuickActionAutovalidationScheduler;
@protocol _NSQuickActionItemSource, _NSQuickActionValidatorObserver;

@interface _NSQuickActionValidator : NSObject <_NSQuickActionAutovalidationHandler> {
    id<_NSQuickActionValidatorObserver> _observer;
    NSMutableSet *_activeValidations;
    _NSQuickActionAutovalidationScheduler *_autovalidationScheduler;
    id<_NSQuickActionItemSource> _itemSource;
    NSSet *_unvalidatedQuickActions;
    NSMutableSet *_validQuickActions;
}

@property (retain) id<_NSQuickActionItemSource> itemSource;
@property (copy) NSSet *unvalidatedQuickActions;
@property (readonly, copy) NSSet *validQuickActions;

+ (id)validatorWithObserver:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithObserver:(id)a0;
- (void)scheduleAutovalidation;

@end
