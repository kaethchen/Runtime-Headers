@interface FigCaptureCMIOExtensionDeskcamStream : FigCaptureCMIOExtensionStream

- (BOOL)startStreamAndReturnError:(id *)a0;
- (BOOL)stopStreamAndReturnError:(id *)a0;
- (void)configureStream;
- (void)createCMIOStreamProperties;

@end
