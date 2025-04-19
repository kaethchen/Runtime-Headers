@interface CNContactPickerViewControllerConfiguration : NSObject

@property (nonatomic, getter=shouldShowSelectedContact) BOOL showsSelectedContact;
@property (nonatomic, getter=shouldHighlightSelectedContact) BOOL highlightsSelectedContact;

+ (id)defaultConfiguration;

- (id)init;

@end
