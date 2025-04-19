@class NSString, NSMutableDictionary;

@interface FIAnalyticsRecord : NSObject

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSMutableDictionary *eventDict;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)validate;
- (id)initWithEventName:(id)a0;

@end
