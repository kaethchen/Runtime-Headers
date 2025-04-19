@class FCTime;

@interface FCTimeRange : NSObject {
    FCTime *_startTime;
    FCTime *_endTime;
}

+ (id)timeRangeWithStartTime:(id)a0 endTime:(id)a1;
+ (id)timeRangeWithDictionary:(id)a0;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)plistRepresentation;
- (id)startTime;
- (BOOL)wraps;
- (id)endTime;
- (id)initWithStartTime:(id)a0 endTime:(id)a1;
- (BOOL)includesTime:(id)a0;

@end
