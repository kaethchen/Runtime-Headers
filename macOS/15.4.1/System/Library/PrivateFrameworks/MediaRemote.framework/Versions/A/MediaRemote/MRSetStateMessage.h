@class MRNowPlayingState;

@interface MRSetStateMessage : MRProtocolMessage {
    MRNowPlayingState *_state;
}

@property (readonly, nonatomic) MRNowPlayingState *state;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithNowPlayingState:(id)a0 encoding:(long long)a1;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;

@end
