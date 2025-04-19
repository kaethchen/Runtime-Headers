@class BMStream;

@interface DNDSBiomeDonationManager : NSObject {
    BMStream *_computedModeStream;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleStateUpdate:(id)a0;
- (void)_donateEventForStateUpdate:(id)a0;

@end
