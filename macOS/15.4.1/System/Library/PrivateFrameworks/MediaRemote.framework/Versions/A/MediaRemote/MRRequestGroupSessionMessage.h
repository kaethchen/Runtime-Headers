@class MRRequestDetails;

@interface MRRequestGroupSessionMessage : MRProtocolMessage

@property (retain, nonatomic) MRRequestDetails *details;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithDetails:(id)a0;

@end
