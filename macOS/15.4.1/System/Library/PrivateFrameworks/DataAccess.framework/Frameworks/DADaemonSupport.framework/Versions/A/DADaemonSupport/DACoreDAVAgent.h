@class CoreDAVOptionsTask, NSTimer, NSString;

@interface DACoreDAVAgent : DAAgent <DABabysittable>

@property (retain, nonatomic) CoreDAVOptionsTask *optionsProbe;
@property (retain, nonatomic) NSTimer *optionsTimeoutTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)waiterID;
- (void)_cancelOptionsTimer;
- (void)_probeAndSyncWithBlock:(id /* block */)a0;
- (void)_serverProbeTimedOut;

@end
