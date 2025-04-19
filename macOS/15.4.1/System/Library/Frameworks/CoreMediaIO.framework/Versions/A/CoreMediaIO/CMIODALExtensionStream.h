@class NSDictionary, NSString, CMIOExtensionSessionStream;

@interface CMIODALExtensionStream : NSObject <CMIOExtensionSessionStreamDelegate> {
    void *_plugIn;
    void *_stream;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertiesLock;
    NSDictionary *_properties;
    NSString *_description;
}

@property (retain) NSDictionary *properties;
@property (readonly, retain) CMIOExtensionSessionStream *sessionStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithPlugIn:(void *)a0 stream:(void *)a1 sessionStream:(id)a2;
- (void)stream:(id)a0 activeFormatIndexChanged:(unsigned long long)a1;
- (struct opaqueCMSampleBuffer { } *)stream:(id)a0 copySampleBuffer:(BOOL *)a1 error:(id *)a2;
- (void)stream:(id)a0 propertiesChanged:(id)a1;
- (void)stream:(id)a0 receivedSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)stream:(id)a0 scheduledOutputChanged:(id)a1;
- (void)streamHasBeenInvalidated:(id)a0;

@end
