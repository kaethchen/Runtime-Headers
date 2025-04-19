@class NSString;

@interface ASKEventHandlerDescription : NSObject <NSCoding> {
    NSString *_name;
    NSString *_commandName;
    NSString *_suiteName;
    NSString *_terminologyName;
    NSString *_terminologyParameters;
    NSString *_categoryName;
    NSString *_actionSelectorName;
    unsigned int _eventClass;
    unsigned int _eventID;
    Class _eventHandlerDelegateClass;
    Class _eventHandlerDataSourceClass;
    Class _eventHandlerClass;
    Class _eventHandlerImplementorClass;
    NSString *_notificationName;
    BOOL _processOnLoad;
}

+ (id)descriptionWithName:(id)a0 dictionary:(id)a1;

- (void)dealloc;
- (id)description;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setName:(id)a0;
- (unsigned int)eventID;
- (id)commandName;
- (unsigned int)eventClass;
- (id)suiteName;
- (void)setEventClass:(unsigned int)a0;
- (id)categoryName;
- (void)setCategoryName:(id)a0;
- (id)notificationName;
- (void)setNotificationName:(id)a0;
- (void)setEventID:(unsigned int)a0;
- (id)initWithName:(id)a0 dictionary:(id)a1;
- (void)setSuiteName:(id)a0;
- (id)terminologyName;
- (id)eventHandlerInstanceWithObject:(id)a0;
- (void)setCommandName:(id)a0;
- (void)setEventHandlerDataSourceClass:(Class)a0;
- (id)actionSelectorName;
- (Class)eventHandlerClass;
- (Class)eventHandlerDataSourceClass;
- (Class)eventHandlerDelegateClass;
- (Class)eventHandlerImplementorClass;
- (id)eventHandlerInstance;
- (BOOL)isKindOfEventHandlerDescription:(id)a0;
- (BOOL)processOnLoad;
- (void)setActionSelectorName:(id)a0;
- (void)setEventHandlerClass:(Class)a0;
- (void)setEventHandlerDelegateClass:(Class)a0;
- (void)setEventHandlerImplementorClass:(Class)a0;
- (void)setProcessOnLoad:(BOOL)a0;
- (void)setTerminologyName:(id)a0;
- (void)setTerminologyParameters:(id)a0;
- (id)terminologyParameters;

@end
