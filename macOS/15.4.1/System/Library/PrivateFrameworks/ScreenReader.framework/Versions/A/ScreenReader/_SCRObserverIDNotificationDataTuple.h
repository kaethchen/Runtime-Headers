@class NSString, NSDictionary;

@interface _SCRObserverIDNotificationDataTuple : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long observerID;
@property (readonly, copy, nonatomic) NSString *notification;
@property (readonly, copy, nonatomic) NSDictionary *data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithObserverID:(unsigned long long)a0 notification:(id)a1 data:(id)a2;

@end
