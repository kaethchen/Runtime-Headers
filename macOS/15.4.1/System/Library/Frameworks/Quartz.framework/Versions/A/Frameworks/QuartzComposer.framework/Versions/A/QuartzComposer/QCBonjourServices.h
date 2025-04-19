@class NSString, QCStructurePort, QCStructure;

@interface QCBonjourServices : QCRunLoopPatch {
    QCStructurePort *outputServices;
    NSString *_serviceType;
    BOOL _keylessStructures;
    struct __CFNetServiceBrowser { } *_browser;
    struct __CFDictionary { } *_serviceList;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _serviceMutex;
    QCStructure *_serviceStructure;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (id)serviceType;
- (void)setServiceType:(id)a0;
- (BOOL)setup:(id)a0;
- (struct __CFDictionary { } *)_serviceList;
- (void)_setStructure:(id)a0;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (BOOL)keylessStructures;

@end
