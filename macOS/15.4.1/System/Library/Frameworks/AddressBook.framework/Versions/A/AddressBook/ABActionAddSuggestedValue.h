@class NSString;

@interface ABActionAddSuggestedValue : NSObject <ABActionDelegate> {
    NSString *_property;
    id _value;
}

@property (readonly) NSString *actionProperty;

- (void).cxx_destruct;
- (id)unlocalizedTitle;
- (id)initWithProperty:(id)a0 value:(id)a1;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (id)titleForPerson:(id)a0 identifier:(id)a1;

@end
