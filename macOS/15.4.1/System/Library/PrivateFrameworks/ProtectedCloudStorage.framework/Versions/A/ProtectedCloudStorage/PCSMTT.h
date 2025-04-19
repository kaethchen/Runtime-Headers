@class NSUUID, NSMutableArray, NSDate;

@interface PCSMTT : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDate *startTime;
@property (retain) NSMutableArray *completedPoints;
@property (readonly) NSUUID *parentUUID;
@property (readonly) NSUUID *UUID;
@property (readonly) double time;
@property BOOL returnedExistingIdentity;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)start;
- (void)stop;
- (id)jsonDict;
- (void)completePoint:(id)a0;
- (id)initWithMTT:(id)a0;
- (void)measure:(id)a0 block:(id /* block */)a1;
- (void)measure:(id)a0 success:(BOOL)a1 time:(double)a2;
- (id)measurePoint:(id)a0;

@end
