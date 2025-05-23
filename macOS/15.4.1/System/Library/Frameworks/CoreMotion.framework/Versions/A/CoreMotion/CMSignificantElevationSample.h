@class NSUUID, NSNumber, NSDate;

@interface CMSignificantElevationSample : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long recordId;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSNumber *elevationAscended;
@property (readonly, nonatomic) NSNumber *elevationDescended;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFilteredElevation:(const struct CLElevationChangeEntry { double x0; double x1; unsigned int x2; unsigned int x3; int x4; double x5; int x6; int x7; float x8; unsigned char x9; unsigned short x10; float x11; BOOL x12; BOOL x13; } *)a0;
- (id)initWithRecordId:(unsigned long long)a0 sourceId:(id)a1 startDate:(id)a2 endDate:(id)a3 elevationAscended:(id)a4 elevationDescended:(id)a5;
- (id)initWithSignificantElevation:(const struct CLSignificantElevation { int x0; unsigned char x1[16]; double x2; double x3; unsigned int x4; unsigned int x5; double x6; BOOL x7; } *)a0;

@end
