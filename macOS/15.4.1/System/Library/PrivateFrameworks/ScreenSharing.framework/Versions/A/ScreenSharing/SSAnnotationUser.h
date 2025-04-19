@class NSString;

@interface SSAnnotationUser : NSObject

@property (retain) NSString *userID;
@property (retain) NSString *appleID;

+ (id)userWithAppleID:(id)a0;

- (id)initWithAppleID:(id)a0;

@end
