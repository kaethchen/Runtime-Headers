@class NSString, NSSet, FMFHandle;

@interface FMFNotNowRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *requestId;
@property (retain) FMFHandle *fromHandle;
@property (retain) NSSet *toHandles;

+ (id)notNowRequestToHandles:(id)a0 fromHandle:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFromHandle:(id)a0 toHandle:(id)a1 requestId:(id)a2;

@end
