@class FigCaptureCMIOExtensionSession, NSSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FigCaptureCMIOExtensionProvider : CMIOExtensionProvider <CMIOExtensionProviderSource> {
    NSObject<OS_dispatch_queue> *_queue;
    FigCaptureCMIOExtensionSession *_session;
    BOOL _invalidated;
}

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, retain, nonatomic) FigCaptureCMIOExtensionSession *session;
@property (readonly, copy) NSSet *availableProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithQueue:(id)a0;
- (void)setSession:(id)a0;
- (BOOL)connectClient:(id)a0 error:(id *)a1;
- (void)disconnectClient:(id)a0;
- (id)providerPropertiesForProperties:(id)a0 error:(id *)a1;
- (BOOL)setProviderProperties:(id)a0 error:(id *)a1;
- (id)deviceOfType:(unsigned long long)a0;

@end
