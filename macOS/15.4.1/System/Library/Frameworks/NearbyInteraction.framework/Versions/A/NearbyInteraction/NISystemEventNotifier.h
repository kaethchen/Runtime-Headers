@class NISession;

@interface NISystemEventNotifier : NSObject {
    NISession *parentSession;
}

- (void).cxx_destruct;
- (void)_notifyResourceUsageLimitExceeded:(BOOL)a0 forSessionConfigurationType:(Class)a1;
- (id)initWithParentSession:(id)a0;
- (void)notifyPassiveAccessIntent:(unsigned int)a0;

@end
