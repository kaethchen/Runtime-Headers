@class BMSource;

@interface LACBiomeDialogDonationHelper : NSObject {
    BMSource *_source;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_donateEvent:(id)a0;
- (void)donateEvent:(id)a0;

@end
