@class NSOutputStream, NSString, NSInputStream, NSRunLoop;

@interface MRStreamTransportConnection : MRExternalDeviceTransportConnection <NSStreamDelegate> {
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSRunLoop *_runLoop;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isValid;
- (void).cxx_destruct;
- (void)close;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (id)runLoop;
- (void)_closeAllStreams;
- (void)_closeStream:(id)a0;
- (void)_openStream:(id)a0;
- (void)_setQOSPropertiesOnStream:(id)a0;
- (void)_stream:(id)a0 handleEvent:(unsigned long long)a1;
- (id)initWithInputStream:(id)a0 outputStream:(id)a1 dataSource:(id)a2;
- (unsigned long long)sendTransportData:(id)a0 options:(id)a1;

@end
