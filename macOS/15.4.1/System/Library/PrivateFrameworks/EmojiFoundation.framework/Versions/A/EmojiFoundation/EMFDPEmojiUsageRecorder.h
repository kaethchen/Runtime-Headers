@class NSString, NSLocale;

@interface EMFDPEmojiUsageRecorder : EMFDPRecorder

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *usageModeIdentifier;

+ (id)_defaultUsageModeIdentifier;

- (void).cxx_destruct;
- (id)delegate;
- (BOOL)report;
- (id)initWithEmoji:(id)a0;
- (id)initWithEmoji:(id)a0 usageModeIdentifier:(id)a1;
- (id)recordingKey;

@end
