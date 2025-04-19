@class NSDictionary, NSString, NSArray;

@interface AMSNotificationSettingsSection : NSObject

@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *footer;
@property (readonly) NSString *identifier;
@property (readonly) NSArray *items;
@property (readonly) NSString *title;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithTitle:(id)a0 footer:(id)a1 items:(id)a2;

@end
