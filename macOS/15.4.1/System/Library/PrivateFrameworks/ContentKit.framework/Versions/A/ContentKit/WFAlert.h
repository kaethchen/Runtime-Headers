@class NSError, NSString, NSArray, WFDatePickerConfiguration, NSDate, LNDialog, WFTextFieldConfiguration, WFAlertButton, NSMutableArray, WFImage;
@protocol WFAlertPresenter;

@interface WFAlert : NSObject

@property (readonly, nonatomic) WFAlertButton *escapeButton;
@property (weak, nonatomic) id<WFAlertPresenter> presenter;
@property (readonly, nonatomic) NSArray *textFieldConfigurationHandlers;
@property (readonly, nonatomic) NSError *associatedError;
@property (weak, nonatomic) id<WFAlertPresenter> presenter;
@property (retain, nonatomic) NSMutableArray *mutableButtons;
@property (retain, nonatomic) NSMutableArray *mutableTextFieldConfigurationHandlers;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long preferredStyle;
@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) WFImage *icon;
@property (retain, nonatomic) WFTextFieldConfiguration *textFieldConfiguration;
@property (retain, nonatomic) WFDatePickerConfiguration *datePickerConfiguration;
@property (copy, nonatomic) NSArray *textFieldResults;
@property (copy, nonatomic) NSDate *datePickerResult;
@property (copy, nonatomic) NSString *associatedParameterKey;
@property (retain, nonatomic) LNDialog *linkDialog;

+ (id)alertWithError:(id)a0;
+ (id)alertWithError:(id)a0 confirmationHandler:(id /* block */)a1;
+ (id)alertWithPreferredStyle:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addButton:(id)a0;
- (void)addTextFieldWithConfigurationHandler:(id /* block */)a0;
- (void)dismissWithCompletionHandler:(id /* block */)a0;

@end
