@class NSTextField;

@interface QCParticleSystemUI : QCInspector {
    NSTextField *delayField;
}

+ (id)viewNibName;

- (void)setupViewForPatch:(id)a0;
- (void)updateDelay:(id)a0;

@end
