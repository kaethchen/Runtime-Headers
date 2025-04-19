@class NSString, NSDate;

@interface IADataPluginNotificationEvent : NSObject

@property (retain) NSString *uid;
@property (retain) NSString *pluginID;
@property (retain) NSString *eventType;
@property (retain) NSDate *date;

+ (id)eventForPlugin:(id)a0 uid:(id)a1 eventType:(id)a2 date:(id)a3;

- (id)description;
- (void).cxx_destruct;

@end
