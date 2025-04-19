@class NSString, NSMutableSet, NSMutableDictionary;

@interface DataStallHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {
    NSMutableDictionary *_store;
    id _triggerDisconnectObserver;
    id _wifiEpochObserver;
    id _primaryObserver;
}

@property (retain, nonatomic) NSMutableSet *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;
+ (unsigned long long)uniqForegroundCountForInterfaceType:(long long)a0 stallType:(unsigned long long)a1;
+ (unsigned long long)uniqStallCountForInterfaceType:(long long)a0 stallType:(unsigned long long)a1 foregroundOnly:(BOOL)a2 since:(id)a3;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)_pruneStaleEndpointsFor:(id)a0 onInterfaceType:(long long)a1 stallType:(unsigned long long)a2;
- (void)_resetInterfaceType:(long long)a0 stallType:(unsigned long long)a1;
- (int)configureInstance:(id)a0;
- (BOOL)noteSymptom:(id)a0;
- (void)processStall:(id)a0 procName:(id)a1 endpoint:(id)a2 foreground:(BOOL)a3 interfaceType:(long long)a4 stallType:(unsigned long long)a5;
- (int)read:(id)a0 returnedValues:(id)a1;
- (unsigned long long)uniqStallCountForInterfaceType:(long long)a0 stallType:(unsigned long long)a1 foregroundOnly:(BOOL)a2 since:(id)a3;

@end
