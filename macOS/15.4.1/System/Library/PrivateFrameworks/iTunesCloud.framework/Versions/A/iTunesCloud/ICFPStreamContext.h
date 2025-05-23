@class NSData;

@interface ICFPStreamContext : NSObject

@property (readonly, nonatomic) unsigned long long accountID;
@property (readonly, copy, nonatomic) NSData *playerInfoContextRequestData;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)getPlayerDelegateInfoDataUsingPlayerDelegateInfoResponseData:(id)a0 returningData:(id *)a1 error:(id *)a2;
- (BOOL)getStreamerInfoContextDataUsingPlayerInfoContextData:(id)a0 returningData:(id *)a1 error:(id *)a2;
- (id)initWithVersion:(unsigned int)a0 contextID:(unsigned int)a1 contentInfo:(id)a2 returningError:(id *)a3;

@end
