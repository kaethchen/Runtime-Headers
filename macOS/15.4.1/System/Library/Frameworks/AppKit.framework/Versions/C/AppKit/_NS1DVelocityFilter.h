@interface _NS1DVelocityFilter : NSObject {
    id _private;
}

@property double lastTimestamp;
@property (readonly) double filteredVelocity;
@property double maxAllowedVelocity;

- (void)dealloc;
- (id)init;
- (void)reset;
- (BOOL)_isTimestampOutOfDate:(double)a0;
- (void)addDelta:(double)a0 withTimestamp:(double)a1;
- (BOOL)resetIfOutOfDate:(double)a0;

@end
