@class NSDate;
@protocol NSObject, NSCopying;

@interface ICTTMergeableWallClockValue : NSObject

@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) id<NSObject, NSCopying> value;

+ (BOOL)canParseData:(id)a0;
+ (id)extractContentsFromBoxedValue:(const void *)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (unsigned long long)merge:(id)a0;
- (id)serialize;
- (id)initWithValue:(id)a0 timestamp:(id)a1;
- (id)initWithArchive:(const void *)a0;
- (void)saveToArchive:(void *)a0;

@end
