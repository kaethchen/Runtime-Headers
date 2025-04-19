@class TTSFirstPartyAudioUnit;

@interface TTSAUMessagingAU : NSObject <AUMessageChannel>

@property (copy, nonatomic) id /* block */ hostBlock;
@property (weak, nonatomic) TTSFirstPartyAudioUnit *owningAudioUnit;
@property (copy) id /* block */ callHostBlock;

- (void).cxx_destruct;
- (id)callAudioUnit:(id)a0;
- (id)echo:(id)a0;

@end
