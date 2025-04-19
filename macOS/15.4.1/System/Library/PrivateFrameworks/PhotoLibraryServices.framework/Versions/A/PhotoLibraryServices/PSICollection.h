@class PSIDate, NSString, NSDate;

@interface PSICollection : PSIObject <NSCopying>

@property (readonly) PSIDate *startDate;
@property (readonly) PSIDate *endDate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long type;
@property (readonly) NSDate *sortDate;
@property (readonly) unsigned long long assetsCountPrivate;
@property (readonly) unsigned long long assetsCountShared;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)objectType;
- (id)_initForCopy:(BOOL)a0;
- (id)initWithUUID:(id)a0 startDate:(id)a1 endDate:(id)a2 title:(id)a3 subtitle:(id)a4 type:(unsigned long long)a5 assetsCountPrivate:(unsigned long long)a6 assetsCountShared:(unsigned long long)a7 sortDate:(id)a8;

@end
