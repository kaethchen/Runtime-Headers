@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface UNCBulletinServerConnection : NSObject {
    NSXPCConnection *_bbServerConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)clientInterface;
+ (id)serverInterface;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)_ensureBBServerSettingsConnection;
- (void)_resetBBServerSettingsConnection;
- (id)activeSectionIDs;
- (id)asyncServerProxyObject;
- (void)refreshAnnounceSettings;
- (void)refreshGlobalSettings;
- (void)refreshSectionInfo;
- (void)refreshSectionInfoForID:(id)a0;
- (id)serverProxyObject;

@end
