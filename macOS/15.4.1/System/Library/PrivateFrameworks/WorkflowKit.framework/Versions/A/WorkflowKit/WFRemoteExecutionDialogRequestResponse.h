@class NSString, WFDialogResponse, NSError;

@interface WFRemoteExecutionDialogRequestResponse : WFRemoteExecutionRequest <WFPBCodable>

@property (readonly, nonatomic) NSString *originatingRequestIdentifier;
@property (readonly, nonatomic) WFDialogResponse *dialogResponse;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)version;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithOriginatingRequestIdentifier:(id)a0 dialogResponse:(id)a1 error:(id)a2;
- (BOOL)readMessageFromData:(id)a0 error:(id *)a1;
- (id)writeMessageToWriter:(id)a0 error:(id *)a1;

@end
