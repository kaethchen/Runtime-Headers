@class NSString;

@interface MPFeedbackCommand : MPRemoteCommand {
    long long _presentationStyle;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedShortTitle;

- (void).cxx_destruct;
- (long long)presentationStyle;
- (void)setPresentationStyle:(long long)a0;
- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithState:(long long)a0;

@end
