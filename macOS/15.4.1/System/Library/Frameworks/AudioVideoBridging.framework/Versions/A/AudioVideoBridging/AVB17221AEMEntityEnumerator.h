@class AVBInterface, AVB17221Entity, AVB17221AEMEntity, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AVB17221AEMEntityEnumerator : NSObject <AVB17221AECPClient> {
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    NSObject<OS_dispatch_queue> *_enumerationQueue;
    NSObject<OS_dispatch_queue> *_blockingQueue;
    AVB17221Entity *_entity;
    AVBInterface *_interface;
    unsigned long long _controllerEntityID;
    unsigned long long _completionCount;
    BOOL _enumerationFailed;
    AVB17221AEMEntity *_entityModel;
}

+ (id)enumerateEntity:(id)a0 onInterface:(id)a1 withControllerEntityID:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)enumerate;
- (BOOL)AECPDidReceiveResponse:(id)a0 onInterface:(id)a1;
- (BOOL)AECPDidReceiveCommand:(id)a0 onInterface:(id)a1;
- (void)_readDescriptorOfType:(unsigned short)a0 withID:(unsigned short)a1 inConfiguration:(unsigned short)a2 inflightLimiter:(id)a3 parent:(id)a4 entryIndex:(unsigned long long)a5;
- (id)initWithEntity:(id)a0 onInterface:(id)a1 withControllerEntityID:(unsigned long long)a2;
- (void)processAVBInterfaceDescriptor:(id)a0 forParent:(id)a1 entryIndex:(unsigned long long)a2 inConfiguration:(unsigned short)a3 inflightLimiter:(id)a4;
- (void)processConfigurationDescriptor:(id)a0 forParent:(id)a1 entryIndex:(unsigned long long)a2 inflightLimiter:(id)a3;
- (void)processControlBlockDescriptor:(id)a0 forParent:(id)a1 entryIndex:(unsigned long long)a2 inConfiguration:(unsigned short)a3 inflightLimiter:(id)a4;
- (void)processEntityDescriptor:(id)a0 forParent:(id)a1 inflightLimiter:(id)a2;
- (void)processJackDescriptor:(id)a0 forParent:(id)a1 entryIndex:(unsigned long long)a2 inConfiguration:(unsigned short)a3 inflightLimiter:(id)a4;
- (void)processLocaleDescriptor:(id)a0 forParent:(id)a1 entryIndex:(unsigned long long)a2 inConfiguration:(unsigned short)a3 inflightLimiter:(id)a4;
- (void)processMatrixDescriptor:(id)a0 forParent:(id)a1 entryIndex:(unsigned long long)a2 inConfiguration:(unsigned short)a3 inflightLimiter:(id)a4;
- (void)processNodeDescriptor:(id)a0 forParent:(id)a1 entryIndex:(unsigned long long)a2;
- (void)processPTPInstanceDescriptor:(id)a0 forParent:(id)a1 entryIndex:(unsigned long long)a2 inConfiguration:(unsigned short)a3 inflightLimiter:(id)a4;
- (void)processPortDescriptor:(id)a0 forParent:(id)a1 entryIndex:(unsigned long long)a2 inConfiguration:(unsigned short)a3 inflightLimiter:(id)a4;
- (void)processStreamPortDescriptor:(id)a0 forParent:(id)a1 entryIndex:(unsigned long long)a2 inConfiguration:(unsigned short)a3 inflightLimiter:(id)a4;
- (void)processUnitDescriptor:(id)a0 forParent:(id)a1 entryIndex:(unsigned long long)a2 inConfiguration:(unsigned short)a3 inflightLimiter:(id)a4;
- (void)readDescriptorOfType:(unsigned short)a0 withID:(unsigned short)a1 inConfiguration:(unsigned short)a2 inflightLimiter:(id)a3 parent:(id)a4 entryIndex:(unsigned long long)a5;

@end
