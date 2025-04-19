@class NSString;
@protocol CHRecognitionSessionObserver;

@interface PKRecognitionSessionObserverWrapper : NSObject <CHRecognitionSessionObserver> {
    id<CHRecognitionSessionObserver> _realObserver;
    _Atomic BOOL _deactivated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
