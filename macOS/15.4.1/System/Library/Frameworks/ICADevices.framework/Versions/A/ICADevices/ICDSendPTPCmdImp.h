@class NSMutableDictionary;

@interface ICDSendPTPCmdImp : ICDBaseCommandImp {
    NSMutableDictionary *_dataDict;
}

- (void)dealloc;
- (id)process;
- (id)initWithPrivateData:(id)a0 commandData:(id)a1;

@end
