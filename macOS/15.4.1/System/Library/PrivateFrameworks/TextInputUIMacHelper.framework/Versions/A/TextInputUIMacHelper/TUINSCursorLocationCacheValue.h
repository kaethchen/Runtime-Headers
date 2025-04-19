@class NSValue, NSDate;

@interface TUINSCursorLocationCacheValue : NSObject

@property (retain, nonatomic) NSValue *wrappedLocation;
@property (retain, nonatomic) NSDate *timestamp;

- (void).cxx_destruct;
- (id)initWithWrappedLocation:(id)a0 andTimestamp:(id)a1;

@end
