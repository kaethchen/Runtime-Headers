@interface QCContact : NSObject {
    struct _QCContactInfo { double x; double y; double prev_x; double prev_y; int state; } _info;
}

@property (readonly) double x;
@property (readonly) double y;
@property (readonly) int state;
@property (readonly) unsigned long long index;

+ (id)contactWithInfo:(struct _QCContactInfo { double x0; double x1; double x2; double x3; int x4; })a0 index:(unsigned long long)a1;

- (id)description;
- (id)initWithInfo:(struct _QCContactInfo { double x0; double x1; double x2; double x3; int x4; })a0 index:(unsigned long long)a1;

@end
