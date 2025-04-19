@class NISession;

@interface NIAcwgEventNotifier : NSObject {
    NISession *parentSession;
}

- (void).cxx_destruct;
- (id)initWithParentSession:(id)a0;
- (void)notifyLockStatusChanged:(unsigned short)a0;
- (void)notifyUrskCreated:(unsigned int)a0;

@end
