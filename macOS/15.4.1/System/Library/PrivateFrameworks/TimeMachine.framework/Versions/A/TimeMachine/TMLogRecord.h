@class NSString, NSDate;

@interface TMLogRecord : NSObject

@property (readonly) NSString *message;
@property (readonly) NSDate *date;
@property (readonly) unsigned int level;
@property (readonly) BOOL isDebug;
@property (readonly) NSString *key;
@property (readonly) NSString *file;
@property (readonly) unsigned int line;

- (id)description;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 date:(id)a1 level:(unsigned int)a2 key:(id)a3 file:(id)a4 line:(unsigned int)a5;

@end
