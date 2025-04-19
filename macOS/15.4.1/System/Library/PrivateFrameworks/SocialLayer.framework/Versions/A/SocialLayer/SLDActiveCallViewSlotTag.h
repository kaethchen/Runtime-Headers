@class NSData, NSString, NSNumber;

@interface SLDActiveCallViewSlotTag : SLDSlotTag <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double maxWidth;
@property (retain, nonatomic) NSData *activeCallGroupPhotoData;
@property (retain, nonatomic) NSString *activeCallDisplayName;
@property (retain, nonatomic) NSNumber *maxWidthNumber;
@property (retain, nonatomic) NSNumber *callActiveNumber;
@property (readonly, nonatomic, getter=isCallActive) BOOL callActive;

+ (id)tagForMaxWidth:(double)a0 callActive:(BOOL)a1 activeCallGroupPhotoData:(id)a2 activeCallDisplayName:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)resolvedStyleForStyle:(id)a0;
- (id)initWithMaxWidth:(double)a0 callActive:(BOOL)a1 activeCallGroupPhotoData:(id)a2 activeCallDisplayName:(id)a3;

@end
