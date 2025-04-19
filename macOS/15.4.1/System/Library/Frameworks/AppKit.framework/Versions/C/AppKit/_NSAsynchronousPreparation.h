@class NSObject;
@protocol OS_dispatch_queue, _NSAsynchronousPreparationInputParameters, _NSAsynchronousPreparationDelegate;

@interface _NSAsynchronousPreparation : NSObject {
    id<_NSAsynchronousPreparationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic unsigned long long _changeCount;
    unsigned long long _scheduledChangeCount;
    BOOL _isObservingInputParameters;
    NSObject<_NSAsynchronousPreparationInputParameters> *_parameters;
    id _preparedResult;
}

@property (readonly, nonatomic) id<_NSAsynchronousPreparationInputParameters> parameters;
@property (readonly, nonatomic) id preparedResult;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)destroy;
- (id)initWithDelegate:(id)a0 parameters:(id)a1;

@end
