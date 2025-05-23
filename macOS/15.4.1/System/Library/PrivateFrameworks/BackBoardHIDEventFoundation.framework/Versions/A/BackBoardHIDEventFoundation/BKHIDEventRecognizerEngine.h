@class NSString, NSMutableArray;

@interface BKHIDEventRecognizerEngine : NSObject <BKHIDEventProcessor> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *recognizers;
@property (retain, nonatomic) NSMutableArray *blocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addRecognizer:(id)a0 recognitionBlock:(id /* block */)a1;
- (long long)processEvent:(inout struct __IOHIDEvent **)a0 sender:(id)a1 dispatcher:(id)a2;
- (void)removeRecognizer:(id)a0;

@end
