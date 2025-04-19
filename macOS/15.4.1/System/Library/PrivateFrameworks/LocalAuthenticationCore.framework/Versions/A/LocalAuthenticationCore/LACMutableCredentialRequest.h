@class NSData, NSUUID, NSString;

@interface LACMutableCredentialRequest : NSObject <LACCredentialRequest>

@property (nonatomic) unsigned int identifier;
@property (nonatomic) long long credential;
@property (retain, nonatomic) NSData *externalizedContext;
@property (nonatomic) unsigned int userID;
@property (retain, nonatomic) NSUUID *contextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
