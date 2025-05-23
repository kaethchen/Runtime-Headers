@interface IPASloMoOperation : IPAVideoOperation {
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
    float _rate;
}

@property (readonly, nonatomic) float rate;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;

+ (id)operationFromFileURL:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)identifier;
- (id)initWithOperation:(id)a0;
- (id)internalRepresentation;
- (id)settingsDictionary;
- (id)initWithSettingsDictionary:(id)a0;
- (id)initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 rate:(float)a1;
- (BOOL)isEqualToOperation:(id)a0;
- (BOOL)isMigratable;

@end
