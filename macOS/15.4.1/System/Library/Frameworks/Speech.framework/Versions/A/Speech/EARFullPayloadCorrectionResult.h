@class NSString, NSDictionary, NSError;

@interface EARFullPayloadCorrectionResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *result;
@property (readonly, copy, nonatomic) NSDictionary *loggingInfo;
@property (readonly, copy, nonatomic) NSError *error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(id)a0 loggingInfo:(id)a1 error:(id)a2;

@end
