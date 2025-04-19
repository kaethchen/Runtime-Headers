@class NSString;

@interface OBEXFileGet : OBEXFileAction {
    NSString *mLocalGetPath;
    NSString *mRemoteFileName;
}

+ (id)withOBEXSession:(id)a0 target:(id)a1 eventSelector:(SEL)a2;

- (void).cxx_destruct;
- (void)OBEXGetHandler:(struct OBEXGetCommandResponseData { unsigned char x0; void *x1; unsigned long long x2; } *)a0;
- (void)SendGetResponse:(const struct OBEXGetCommandResponseData { unsigned char x0; void *x1; unsigned long long x2; } *)a0;
- (int)getDefaultVCardToLocalPathAndName:(id)a0;
- (int)getRemoteFileNamed:(id)a0 toLocalPathAndName:(id)a1;
- (void)initForNewAction;
- (void)postFileReceivedProcessing;
- (void)startCommand;

@end
