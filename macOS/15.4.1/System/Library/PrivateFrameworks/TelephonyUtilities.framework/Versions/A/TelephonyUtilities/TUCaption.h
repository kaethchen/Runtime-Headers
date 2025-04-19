@class NSString, NSNumber;

@interface TUCaption : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double confidence;
@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) NSNumber *utteranceStartTimestamp;
@property (readonly, nonatomic) NSNumber *utteranceDuration;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;
+ (double)averageConfidenceOverCaptions:(id)a0;
+ (id)combinedStringFromCaptions:(id)a0;
+ (id)unarchivedObjectClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (id)initWithCaption:(id)a0;
- (id)initWithCaptionsToken:(id)a0;
- (id)initWithCaptionsToken:(id)a0 utteranceStartTimestamp:(id)a1 utteranceDuration:(id)a2;
- (id)initWithConfidence:(double)a0 text:(id)a1;
- (BOOL)isEqualToCaption:(id)a0;

@end
