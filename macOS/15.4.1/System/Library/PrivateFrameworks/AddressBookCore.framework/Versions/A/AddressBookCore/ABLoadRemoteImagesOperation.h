@class NSString, CNTask;

@interface ABLoadRemoteImagesOperation : NSOperation {
    NSString *_contactIdentifier;
    CNTask *_task;
    id /* block */ _callbackBlock;
    BOOL _debuggingWhereImagesCameFrom;
}

@property (readonly) long long tag;

- (void)dealloc;
- (void)cancel;
- (void)main;
- (void)_doMain;
- (void)_respondWithPhoto:(id)a0;
- (void)debugLog:(id)a0;
- (id)initWithImageLoadRequest:(id)a0 tag:(long long)a1 callback:(id /* block */)a2;

@end
