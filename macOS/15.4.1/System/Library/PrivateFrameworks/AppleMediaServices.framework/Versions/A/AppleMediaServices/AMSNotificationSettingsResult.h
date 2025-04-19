@class NSArray;

@interface AMSNotificationSettingsResult : NSObject

@property (readonly) NSArray *sections;

+ (id)_sectionsFromDictionaryRepresentation:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
