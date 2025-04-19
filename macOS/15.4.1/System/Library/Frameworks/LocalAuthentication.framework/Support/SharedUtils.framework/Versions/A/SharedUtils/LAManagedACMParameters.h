@class NSMutableData, NSString;

@interface LAManagedACMParameters : NSObject <NSCopying> {
    NSString *_description;
}

@property (readonly, nonatomic) NSMutableData *data;
@property (readonly, nonatomic) struct { unsigned int x0; void *x1; unsigned int x2; } *acmParameters;
@property (readonly, nonatomic) unsigned int count;

+ (id)acmParameterSecureIntentSupport;
+ (id)acmParameterDoNotStartDTOTimers;
+ (id)acmParameterWithMaxContinuityAge:(unsigned int)a0;
+ (id)acmParameterWithTimeOffset:(unsigned int)a0;
+ (id)acmParameterWithUserId:(unsigned int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_appendACMParameter:(id)a0;
- (id)acmParameterByAppendingACMParameters:(id)a0;
- (const struct { unsigned int x0; void *x1; unsigned int x2; } *)findACMParameterWithType:(unsigned int)a0;
- (id)initWithACMParamType:(unsigned int)a0 bytes:(void *)a1 length:(unsigned long long)a2 description:(id)a3;

@end
