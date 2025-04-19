@class MPCPlayerCommandRequest, NSDate, MPCPlayerCommandStatus, NSData;

@interface MPCMediaRemoteCommandOperation : MPAsyncOperation

@property (readonly, nonatomic) MPCPlayerCommandRequest *request;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSDate *sendDate;
@property (readonly, nonatomic) MPCPlayerCommandStatus *status;
@property (readonly, nonatomic) NSData *tokenB;

- (void).cxx_destruct;
- (void)execute;
- (BOOL)_checkDependenciesForFailures:(id)a0;
- (void)_completeRequestID:(id)a0 withStatus:(id)a1;
- (BOOL)_handleLibraryManipulationCommandsForRequestID:(id)a0;
- (id)_wrapUnderlyingErrorsIfNeeded:(id)a0;
- (id)initWithCommandRequest:(id)a0 options:(unsigned long long)a1 sendDate:(id)a2;

@end
