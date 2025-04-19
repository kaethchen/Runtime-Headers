@class NSDate;

@interface CMLiveSkiData : NSObject <NSSecureCoding, NSCopying> {
    NSDate *_date;
    double _distance;
    double _averageSpeed;
    double _verticalDescent;
    int _runCount;
    double _maximumSpeed;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) double averageSpeed;
@property (readonly, nonatomic) double verticalDescent;
@property (readonly, nonatomic) unsigned long long runCount;
@property (readonly, nonatomic) double maximumSpeed;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 distance:(double)a1 averageSpeed:(double)a2 verticalDescent:(double)a3 runCount:(int)a4 maximumSpeed:(double)a5;

@end
