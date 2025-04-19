@class NSArray, NSString, NSNumber;

@interface MTRWebRTCTransportRequestorClusterICEServerStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *credential;
@property (copy, nonatomic) NSNumber *caid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
