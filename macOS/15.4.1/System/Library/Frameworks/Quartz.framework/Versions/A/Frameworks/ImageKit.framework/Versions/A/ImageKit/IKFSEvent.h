@class NSString;

@interface IKFSEvent : NSObject

@property (copy) NSString *path;
@property unsigned long long eventType;

+ (id)eventWithPath:(id)a0 eventType:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0 eventType:(unsigned long long)a1;

@end
