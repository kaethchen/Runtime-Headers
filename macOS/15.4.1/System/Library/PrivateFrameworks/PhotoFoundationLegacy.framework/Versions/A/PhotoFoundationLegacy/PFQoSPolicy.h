@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PFQoSPolicy : NSObject {
    NSMutableDictionary *_qosClasses;
    NSObject<OS_dispatch_queue> *_qosCacheAccess;
}

- (id)copy;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)qosClassForServcieType:(id)a0;
- (id)qosLevelStringForServiceType:(id)a0;
- (id)qosQueueForServcieType:(id)a0;
- (void)setQoS:(unsigned int)a0 forServiceType:(id)a1;

@end
