@class NSString, NSArray, NSDate;

@interface KHProjectBundleDatabaseActivityRecord : NSObject

@property (readonly) NSString *reason;
@property (readonly) NSString *identifier;
@property (readonly) NSArray *callStackSymbols;
@property (readonly) NSDate *startDate;
@property (readonly) double elapsedTimeInterval;

- (void).cxx_destruct;
- (id)initWithReason:(id)a0;

@end
