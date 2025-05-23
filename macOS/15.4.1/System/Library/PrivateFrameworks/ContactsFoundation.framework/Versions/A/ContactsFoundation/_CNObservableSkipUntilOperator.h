@class NSString, CNObservable;
@protocol CNCancelable;

@interface _CNObservableSkipUntilOperator : CNObservable <_CNObservableSkipUntilSignalObserverDelegate, _CNObservableSkipUntilInputObserverDelegate>

@property (readonly) CNObservable *input;
@property (readonly) CNObservable *signal;
@property (getter=isActive) BOOL active;
@property (retain) id<CNCancelable> inputToken;
@property (retain) id<CNCancelable> signalToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (id)subscribe:(id)a0;
- (id)initWithInput:(id)a0 signal:(id)a1;
- (void)inputDidTerminate;
- (BOOL)shouldMirrorEvents;
- (void)signalDidGenerateEvent;

@end
