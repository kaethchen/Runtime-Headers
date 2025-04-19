@class NSString, NSSet, FMFHandle, NSDate;

@interface FMFFriendshipRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *requestId;
@property long long requestType;
@property (retain) FMFHandle *fromHandle;
@property (retain) NSSet *toHandles;
@property (retain) NSDate *endDate;
@property (retain) NSString *groupId;

+ (id)friendshipRequestToHandles:(id)a0 fromHandle:(id)a1 withType:(long long)a2 groupId:(id)a3 withEndDate:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFromHandle:(id)a0 toHandle:(id)a1 ofType:(long long)a2 groupId:(id)a3 endDate:(id)a4 requestId:(id)a5;

@end
