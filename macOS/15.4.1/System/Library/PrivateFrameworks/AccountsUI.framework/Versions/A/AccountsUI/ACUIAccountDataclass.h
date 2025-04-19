@class NSString, NSImage, ACAccount, NSObject;
@protocol ACUIAccountDataclassDelegate;

@interface ACUIAccountDataclass : NSObject

@property (readonly, nonatomic, getter=isConfiguring) BOOL configuring;
@property (readonly, nonatomic, getter=isGreyMode) BOOL greyMode;
@property (readonly, nonatomic) NSString *optionButtonTitle;
@property (readonly, nonatomic) NSString *statusString;
@property (weak) ACAccount *account;
@property (weak) NSObject<ACUIAccountDataclassDelegate> *delegate;
@property (retain, nonatomic) NSImage *icon;
@property (retain, nonatomic) NSString *localizedName;
@property (readonly) NSString *identifier;

+ (id)_supportedDataclasses;
+ (id)dataclassWithIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isEnabled;
- (void)didClickOptionsButton:(id)a0;
- (id)nameColor;
- (void)setDataclassEnabled:(BOOL)a0 sender:(id)a1;

@end
