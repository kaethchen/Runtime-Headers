@class NSOperationQueue, NSMutableDictionary, MADService;

@interface IMCommSafetyRequestsManager : NSObject {
    NSOperationQueue *operationQueue;
}

@property (retain, nonatomic) id userSafetyClient;
@property (retain, nonatomic) MADService *service;
@property (retain, nonatomic) NSMutableDictionary *cachedResults;

+ (void)initialize;
+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_identifierForURL:(id)a0 withChatID:(id)a1;
- (void)_setSensitiveValue:(BOOL)a0 forIdentifier:(id)a1;
- (BOOL)_shouldForceSensitivityResult;
- (id)cachedResultForContentAttachment:(id)a0 withChatID:(id)a1;
- (void)isSensitiveCGImage:(struct CGImage { } *)a0 withOrientation:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)isSensitiveContent:(id)a0 contentAttachmentType:(long long)a1 useBlastDoor:(BOOL)a2 withChatID:(id)a3 completionHandler:(id /* block */)a4;
- (void)isSensitiveContent:(id)a0 contentAttachmentType:(long long)a1 withChatID:(id)a2 completionHandler:(id /* block */)a3;
- (void)isSensitiveContent:(id)a0 withChatID:(id)a1 completionHandler:(id /* block */)a2;
- (void)isSensitiveImage:(id)a0 withChatID:(id)a1 completionHandler:(id /* block */)a2;

@end
