@class NSString;

@interface AssistantStateProxy.AssistantStateObserver : NSObject <AFNotifyObserverDelegate> {
    void /* unknown type, empty encoding */ timeout;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ monitor;
    void /* unknown type, empty encoding */ handlers;
    void /* unknown type, empty encoding */ isListeningStartDate;
    void /* unknown type, empty encoding */ states;
}

@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;

@end
