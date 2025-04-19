@class MRPlaybackSessionMigrateRequest;

@interface MRPlaybackSessionMigrateResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSessionMigrateRequest *request;

- (unsigned long long)type;
- (id)initWithRequest:(id)a0;

@end
