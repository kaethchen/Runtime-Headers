@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AAMessagingDestination : NSObject <NSCopying> {
    NSObject<OS_dispatch_queue> *_idsQueue;
}

@property (readonly, nonatomic) long long destinationType;
@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSString *destinationURI;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithHandle:(id)a0;
- (id)initWithPhoneNumber:(id)a0;
- (id)initWithEmail:(id)a0;
- (void)isRegisteredToiMessageWithCompletion:(id /* block */)a0;

@end
