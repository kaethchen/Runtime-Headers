@class NSString, NSArray, NSDate;

@interface MTStopwatch : NSObject <NSSecureCoding, MTDictionarySerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) double offset;
@property (nonatomic) double currentInterval;
@property (nonatomic) double previousLapsTotalInterval;
@property (copy, nonatomic) NSArray *laps;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionForState:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)hashString;
- (id)initWithId:(id)a0;
- (void)_copyStateOntoStopwatch:(id)a0;
- (BOOL)_isEqualToStopwatch:(id)a0;

@end
