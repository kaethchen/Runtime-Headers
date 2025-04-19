@class MRApplicationConnectionRequestInfo, MRApplicationConnectionContext;

@interface MRCreateApplicationConnectionMessage : MRProtocolMessage

@property (readonly, nonatomic) MRApplicationConnectionRequestInfo *requestInfo;
@property (readonly, nonatomic) MRApplicationConnectionContext *context;

- (unsigned long long)type;
- (id)initWithConnectionContext:(id)a0 requestInfo:(id)a1;

@end
