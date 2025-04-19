@interface APSMultiUserFS : NSObject

@property (readonly) BOOL isMultiUser;

+ (id)sharedInstance;

- (id)initWithIsMultiUserMode:(BOOL)a0;
- (id)systemPath;

@end
