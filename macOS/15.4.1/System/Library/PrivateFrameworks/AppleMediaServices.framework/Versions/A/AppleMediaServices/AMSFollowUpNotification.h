@class AMSFollowUpAction, NSSet, NSString;

@interface AMSFollowUpNotification : NSObject

@property (retain) AMSFollowUpAction *activateAction;
@property (retain) NSSet *options;
@property (retain) NSString *informativeText;
@property (retain) NSString *title;

+ (id)defaultOptions;
+ (id)optionForString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)generateNotification;
- (id)initWithJSONDictionary:(id)a0 parentIdentifier:(id)a1 logKey:(id)a2;

@end
