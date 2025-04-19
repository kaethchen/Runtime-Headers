@class NSString;

@interface CBDisplayContainerDFR : CBContainer <CBContainerProtocol, CBHIDServiceProtocol> {
    struct __IOHIDServiceClient { } *_dfrService;
    BOOL _isRunning;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)start;
- (void)stop;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (id)initWithDFRService:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;

@end
