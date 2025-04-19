@interface ICFPLeaseSyncSession : NSObject

@property (readonly, nonatomic) unsigned long long accountID;
@property (readonly, nonatomic) id leaseID;
@property (readonly, nonatomic) unsigned int mediaKind;

+ (id)leaseSyncSessionWithID:(id)a0 accountID:(unsigned long long)a1 mediaKind:(unsigned int)a2 returningLeaseSyncRequestData:(id *)a3 error:(id *)a4;

- (void).cxx_destruct;
- (BOOL)processRenewResponseData:(id)a0 error:(id *)a1;
- (BOOL)endLeaseSyncAndReturnError:(id *)a0;
- (BOOL)getLeaseSyncRenewRequestData:(id *)a0 error:(id *)a1;
- (BOOL)importLeaseSyncResponseData:(id)a0 error:(id *)a1;

@end
