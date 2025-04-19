@class NSString, NSMutableDictionary, NSXPCConnection;
@protocol SCContentSharingSessionManagerProtocol;

@interface SCContentSharingSessionManager : NSObject <SCContentSharingSessionClientProtocol> {
    NSXPCConnection *_service;
    NSXPCConnection *_priviledgedNotificationService;
    NSMutableDictionary *_allSessions;
}

@property (weak, nonatomic) id<SCContentSharingSessionManagerProtocol> systemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (id)copyAllSessions;
- (void)pickerCanceledSession:(id)a0;
- (id)displayWithDisplayId:(unsigned int)a0;
- (id)initInternal;
- (void)endSession:(id)a0;
- (void)addSession:(id)a0;
- (void)removeSession:(id)a0;
- (void)showPicker:(id)a0;
- (id)content:(id)a0;
- (oneway void)notification:(id)a0;
- (id)createSession:(id)a0;
- (id)metadataForSession:(id)a0;
- (id)serializedSessionFromUUID:(id)a0;
- (void)showPickerForType:(id)a0 Type:(long long)a1;
- (void)updateContent:(id)a0 Content:(id)a1;
- (void)updateMetadata:(id)a0 forSession:(id)a1;
- (id)windowWithWindowId:(unsigned int)a0;

@end
