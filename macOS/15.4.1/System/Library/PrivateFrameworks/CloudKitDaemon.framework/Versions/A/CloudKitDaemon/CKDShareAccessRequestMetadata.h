@class NSString, CKDPUserInformationRequestAccess, NSURL, NSData;

@interface CKDShareAccessRequestMetadata : NSObject

@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSString *routingKey;
@property (copy, nonatomic) NSData *shortTokenHash;
@property (retain, nonatomic) CKDPUserInformationRequestAccess *userInformationRequestAccess;

- (void).cxx_destruct;

@end
