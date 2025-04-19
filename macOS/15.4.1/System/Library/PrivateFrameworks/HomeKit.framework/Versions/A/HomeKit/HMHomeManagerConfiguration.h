@class HMFLocationAuthorization, NSString, NSOperationQueue, NSURL, NSArray;

@interface HMHomeManagerConfiguration : NSObject <HMFObject, NSCopying, NSMutableCopying>

@property unsigned long long cachePolicy;
@property unsigned long long options;
@property (getter=isDiscretionary) BOOL discretionary;
@property unsigned long long inactiveUpdatingLevel;
@property (getter=isAdaptive) BOOL adaptive;
@property (retain) NSOperationQueue *delegateQueue;
@property (retain) HMFLocationAuthorization *locationAuthorization;
@property (readonly) BOOL shouldConnect;
@property (readonly) BOOL canUseCache;
@property (readonly) BOOL canWriteToCache;
@property (readonly) NSURL *cacheURL;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)defaultConfiguration;
+ (id)defaultPrivateConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0 cachePolicy:(unsigned long long)a1;

@end
