@class NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NEPolicySession : NSObject <NEPrettyDescription> {
    BOOL _convertToLegacyPriority;
    unsigned int _lastSendMessageID;
    int _sessionFD;
    long long _internalPriority;
    NSMutableDictionary *_policies;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;
    NSData *_lastReceivedResponse;
}

@property long long priority;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)addPolicy:(id)a0;
- (id)initWithSocket:(int)a0;
- (id)dumpDomainTries;
- (unsigned long long)addDomainFilterWithData:(id)a0;
- (unsigned long long)addDomainTrieWithData:(id)a0;
- (unsigned long long)addPolicy:(id)a0 storeLocally:(BOOL)a1;
- (BOOL)apply;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)dumpKernelPolicies;
- (int)dupSocket;
- (id)initFromPrivilegedProcess;
- (id)initWithSessionName:(id)a0;
- (BOOL)lockSessionToCurrentProcess;
- (id)policyWithID:(unsigned long long)a0;
- (BOOL)registerServiceUUID:(id)a0;
- (BOOL)removeAllDomainFilters;
- (BOOL)removeAllDomainTries;
- (BOOL)removeAllPolicies;
- (BOOL)removeDomainFilterWithID:(unsigned long long)a0;
- (BOOL)removeDomainTrieWithID:(unsigned long long)a0;
- (BOOL)removePolicyWithID:(unsigned long long)a0;
- (BOOL)unregisterServiceUUID:(id)a0;

@end
