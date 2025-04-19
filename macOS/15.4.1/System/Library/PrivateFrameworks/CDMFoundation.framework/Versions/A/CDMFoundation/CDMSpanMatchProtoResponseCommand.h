@class SIRINLUINTERNALSPANMATCHSpanMatchResponse, NSArray;

@interface CDMSpanMatchProtoResponseCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALSPANMATCHSpanMatchResponse *spanMatchResponse;
@property (readonly, nonatomic) NSArray *matchingSpansForExternalParsers;
@property (readonly, nonatomic) NSArray *matchingSpansForNL;

- (id)description;
- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;

@end
