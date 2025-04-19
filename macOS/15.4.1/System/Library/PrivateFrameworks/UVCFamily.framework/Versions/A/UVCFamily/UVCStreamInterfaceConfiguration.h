@class NSArray, NSString;

@interface UVCStreamInterfaceConfiguration : UVCInterfaceConfiguration {
    BOOL _nalStreamSEIDataReadEnabled;
}

@property (readonly) unsigned char noOfConcurrentReads;
@property (readonly) struct { unsigned char noOfFutureReads; unsigned char doFrameStartComputation : 1; unsigned char reserved : 7; } isochConfiguration;
@property (readonly) struct { unsigned char minPixelBufferPoolBuffers; unsigned char maxPixelBufferPoolBuffers; unsigned char disableHWDecoding : 1; unsigned char usePTSDeltaAsFrameInterval : 1; unsigned char reserved : 6; } frameProcessingConfiguration;
@property (readonly) NSArray *hideStreamFormats;
@property (readonly) NSArray *outputPixelFormats;
@property (readonly) NSString *extensionClassName;
@property (getter=isNalStreamSEIDataReadEnabled) BOOL nalStreamSEIDataReadEnabled;

- (void).cxx_destruct;
- (id)initWithService:(unsigned int)a0;
- (void)parseIOService:(unsigned int)a0;
- (void)parseConfiguration:(id)a0 resourceConfiguartion:(id)a1;
- (void)parseDefaults;

@end
