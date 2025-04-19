@class NSString, NSMutableArray;

@interface ASKNibObjectInfo : NSObject <NSCoding> {
    long long _ID;
    NSString *_name;
    NSString *_scriptName;
    NSMutableArray *_eventHandlerNames;
    int _scope;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setName:(id)a0;
- (int)scope;
- (void)setScope:(int)a0;
- (long long)ID;
- (void)setID:(long long)a0;
- (BOOL)hasInfo;
- (id)scriptName;
- (void)addEventHandlerName:(id)a0;
- (id)eventHandlerNames;
- (unsigned long long)indexOfEventHandlerName:(id)a0;
- (void)removeEventHandlerName:(id)a0;
- (void)setEventHandlerNames:(id)a0;
- (void)setScriptName:(id)a0;

@end
