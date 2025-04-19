@class NSString;

@interface PEAudioMixModeAction : PEEditAction

@property (retain, nonatomic) NSString *audioMixMode;

- (void).cxx_destruct;
- (long long)actionType;
- (void)applyToLoadResult:(id)a0 completion:(id /* block */)a1;

@end
